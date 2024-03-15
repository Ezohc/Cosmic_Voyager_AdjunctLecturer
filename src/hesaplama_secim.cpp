//
// Created by Enis on 15.03.2024.
//
#include "hesaplama_secim.h"



std::unique_ptr<IGemi> hesaplama_secim::gemi_secim() {
    while (true){

        std::cout << "Gemi Sec 1)GUCLU GEMI, 2)HIZLI GEMI, 3)NORMAL GEMI"<< "\n";
        std::cin  >> gemi_secimi ;

        switch (gemi_secimi) {
            case 1:
                std::cout <<resimler::guclu_gemi_resmi;
                std::cout << "Guclu Gemi Secildi" << "\n";
                return std::make_unique<guclu_gemi>();
            case 2:
                std::cout << resimler::hizli_gemi_resmi;
                std::cout << "Hizli Gemi Secildi" << "\n";
                return std::make_unique<hizli_gemi>();
            case 3:
                std::cout << resimler::normal_gemi_resmi;
                std::cout << "Normal Gemi Secildi" << "\n";
                return std::make_unique<normal_gemi>();
            default:
                std::cout << "Gecersiz sayi girisi." << std::endl;
                break;
        }
    }
}

const std::unique_ptr<IEvent> hesaplama_secim::event_secim() {

    switch (randomsayi() % event_sayisi + 1) {
        case 1:
            std::cout << "ASTEROID EVENT" << "\n\n";
            std::cout << resimler::asteroid_resmi << "\n";
            std::this_thread::sleep_for(std::chrono::seconds(1));
            return std::make_unique<asteroid_event>();
        case 2:
            std::cout << "TERKEDILMIS GEZEGEN" << "\n\n";
            std::cout << resimler::gezegen_resmi << "\n";
            std::this_thread::sleep_for(std::chrono::seconds(1));
            return std::make_unique<gezegen_event>();
        case 3:
            std::cout << "UZAY KORSANLARI" << "\n\n";
            std::cout << resimler::uzay_korsanlari_resmi << "\n";
            std::this_thread::sleep_for(std::chrono::seconds(1));
            return std::make_unique<uzay_korsanlari_event>();
        default:
            std::cout << "Rand fonk crash." << std::endl;
            return std::make_unique<asteroid_event>();
    }
}