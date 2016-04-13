//
//  Histogramme.cpp
//  ProjetPoo
//
//  Created by Damien Le Garrec on 11/04/2016.
//  Copyright © 2016 MMD. All rights reserved.
//

#include "Histogramme.hpp"


Histogramme::Histogramme(){
    histo=*new vector<string>;
}

Histogramme::~Histogramme(){
    
}


void Histogramme::ajouterEffet(string effet){
    vector<string>::iterator it;
    it =find (histo.begin(),histo.end(),effet);
    if( it==histo.end()){
        histo.push_back(effet);
    }
}

void Histogramme::afficherHisto(){
    vector<string>::iterator it;
    for(it=histo.begin(); it!=histo.end();it++){
        cout<<*it<<endl;
    }
}