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

void Histogramme::afficherHisto(){
    map<string,vector<string>>::iterator it;
    for(it=histo.begin(); it!=histo.end();it++){
        cout<<it->first<<endl;
    }
}

void Histogramme::associerMedicament(string effet,string medoc){
    vector<string>::iterator it;
}