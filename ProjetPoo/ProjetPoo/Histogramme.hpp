//
//  Histogramme.hpp
//  ProjetPoo
//
//  Created by Damien Le Garrec on 11/04/2016.
//  Copyright © 2016 MMD. All rights reserved.
//

#ifndef Histogramme_hpp
#define Histogramme_hpp

#include <stdio.h>
#include <vector>
#include <string.h>
#include <stdlib.h>
#include <iostream>


using namespace std;
class Histogramme{
protected:
    vector<string> histo;
    
public:
    Histogramme();
    ~Histogramme();
    void ajouterEffet(string effet);
    void afficherHisto();
    
    
    
};

#endif /* Histogramme_hpp */
