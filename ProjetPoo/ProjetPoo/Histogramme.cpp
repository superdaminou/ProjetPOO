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

Histogramme::~Histogramme(){
    
}


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