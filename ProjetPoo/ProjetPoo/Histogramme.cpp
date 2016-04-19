#include "Histogramme.hpp"


/************************************
 *************************************
 **** Constructeur et Destructeur ****
 *************************************
 ************************************/

Histogramme::Histogramme(){
    histo=*new map<string,vector<string>>;
}

Histogramme::Histogramme(Pharmacie med)
{
    //On recup la pharmacie
    map<string,vector<string>> pharma = med.getMeds();
    
    
    //iterator pour l'hitogramme
    map<string,vector<string>>::iterator iH = histo.begin();
    //vector <string>::iterator iHv = iH->second.begin();
    
    for (map<string,vector<string>>::iterator iP=pharma.begin();iP != pharma.end();iP++)
    {
        
        for (vector <string>::iterator iPv = iP->second.begin();iPv != iP->second.end();iPv++)
        {
            
            //Pour chaque effet on compare avec histo pour savoir si il est deja présent
            map<string,vector<string>>::iterator iF = histo.find(*iPv);
            if(iF == histo.end())
            {
                //l'effet n'a pas été trouvé il est donc absent de l histo
                histo[*iPv];
                iH->second.push_back(iP->first);
                
            }
            
        }
        
    }
    
}

Histogramme::~Histogramme(){
    
}


/***************
 ****************
 *** Methodes ***
 ****************
 ****************/

void Histogramme::ajouterEffet(string effet){
    map<string,vector<string>>::iterator it;
    it =histo.find(effet);
    if( it==histo.end()){
        histo[effet];
    }
}

void Histogramme::afficherEffet(){
    map<string,vector<string>>::iterator it;
    for(it=histo.begin(); it!=histo.end();it++){
        cout<<it->first<<endl;
    }
}

void Histogramme::afficherHisto(){
    map<string,vector<string>>::iterator it;
    for(it=histo.begin();it!=histo.end();it++){
        cout<<"effet : "<<it->first<<", medicaments associé : ";
        for(vector<string>::iterator ip=it->second.begin();ip!=it->second.end();ip++){
            cout<<*ip;
        }
        cout<<endl;
    }
}

void Histogramme::associerMedicament(string effet,string medoc){
    map<string,vector<string>>::iterator it;
    for(it=histo.begin();it!=histo.end();it++){
        //cout<<it->first<<" "<<endl;
        if(it->first==effet){
            cout<<"effet trouver"<<endl;
            for(vector<string>::iterator ip=it->second.begin();ip!=it->second.end();ip++){
                cout<<*ip<<" ";
                if(*ip==medoc){
                    cout<<" effet et medicaments deja associé"<<endl;
                    return;
                }
                
            }
            it->second.push_back(medoc);
            cout<<"association ajouté"<<endl;
            return;
            
        }
    }
    cout<<"effet non trouvé"<<endl;
}