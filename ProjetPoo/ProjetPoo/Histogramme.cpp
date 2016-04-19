//
//  Histogramme.cpp
//  ProjetPoo
//
//  Created by Damien Le Garrec on 11/04/2016.
//  Copyright © 2016 MMD. All rights reserved.
//

#include "Histogramme.hpp"


Histogramme::Histogramme(){
    histo=*new map<string,vector<string>>;
}

Histogramme::Histogramme(Pharmacie med)
{
    //On recup la pharmacie
    map<string,vector<string>> pharma = med.getMeds();
    
    
    //iterator pour l'hitogramme
    map<string,vector<string>>::iterator iH = histo.begin();
    vector <string>::iterator iHv = iH->second.begin();
    
    for (map<string,vector<string>>::iterator iP=pharma.begin();
         iP != pharma.end();
         iP++)
    {
        
        for (vector <string>::iterator iPv = iP->second.begin();
             iPv != iP->second.end();
             iPv++)
        {
            
            //Pour chaque effet on compare avec histo pour savoir si il est deja présent
            map<string,vector<string>>::iterator iF = histo.find(*iPv);
            if(iF == histo.end())
            {
                //l'effet n'a pas été trouvé il est donc absent de l histo
                histo[*iPv];
                
                histo.insert(std::pair<string, vector<string>>(*iPv, *iPv->push_back(*iP)));
                histo.

                iH->second.push_back(iP->first);
                
            }
            
            
            
            
        }
        
        //on va traiter ici les medicaments
        
        
        
        
    }
    
}

Histogramme::~Histogramme(){
    
}


void Histogramme::ajouterEffet(string effet){
    map<string,vector<string>>::iterator it;
    it =histo.find(effet);
    if( it==histo.end()){
        histo[effet];
    }
}

void Histogramme::afficherHisto(){
    map<string,vector<string>>::iterator it;
    for(it=histo.begin(); it!=histo.end();it++){
        cout<<it->first<<endl;
    }
}

void Histogramme::associerMedicament(string effet,string medoc){
    vector<string>::iterator it;
}