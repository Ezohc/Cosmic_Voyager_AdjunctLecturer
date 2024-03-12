//
// Created by Enis on 11.03.2024.
//

#include "Asteroid_Event.h"


void asteroid_event::event(IGemi &gemi) {
    if(gemi.kacma_ihtimali < randomsayi()%10 + 1) {
        gemi.saglik = gemi.saglik - Hasar * gemi.alinan_hasar_kat;
        std::cout << "HASAR YEDIN ZORT saglik degeri:" << gemi.saglik << "\n";
        if(gemi.saglik < olme_kosulu){
            std::cout << "GEBERDIN" << "\n";
            gemi.saglik = olme_kosulu;
        }
    }
    else {
        std::cout << "HASAR YEMEDIN  saglik degeri:" <<gemi.saglik << "\n";
    }

}

