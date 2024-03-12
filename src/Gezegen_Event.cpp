//
// Created by Enis on 11.03.2024.
//
#include "Gezegen_Event.h"

void gezegen_event::event(IGemi& gemi){
    if (gezegen_altin_olasiligi < (randomsayi() % 10 + 1)) {
        std::cout << "TERKEDILMIS GEZEGENDE 10 ALTIN BULDUN !!!!" << "\n";
        gemi.para = gemi.para + altin_miktari;
        std::cout << "Altin Miktari: " << gemi.para << "\n";
    }
    else
    {
        std::cout << "TERKEDILMIS GEZEGENDE UZAY KORSANLARI ILE KARSILASTIN !!!!" << "\n";
        uzay_korsanlari_event korsan;
        korsan.event(gemi);
    }
}