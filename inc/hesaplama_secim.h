//
// Created by Enis on 11.03.2024.
//

#ifndef COSMIC_VOYAGER_ADJUNCTLECTURER_HESAPLAMA_SECIM_H
#define COSMIC_VOYAGER_ADJUNCTLECTURER_HESAPLAMA_SECIM_H

#include "IGemi.h"
#include "Guclu_Gemi.h"
#include "Hizli_Gemi.h"
#include "Normal_Gemi.h"
#include "Asteroid_Event.h"
#include "Gezegen_Event.h"
#include "Uzay_Korsanlari_Event.h"
#include "RandomNumberGenerator.h"
std::string normal_gemi_resmi =
    "           |                                                     \n"
    "          / \\                                                       \n"
    "         /   \\                                                           \n"
    "        /_____\\                                                         \n"
    "        | (_) |                                                            \n"
    "        |     |                                                            \n"
    "        | ETU |                                                             \n"
    "        |  _  |                                                          \n"
    "        | | | |                                                       \n"
    "        | | | |                                                      \n"
    "        | | | |                                                         \n"
    "       /  | |  \\                                                              \n"
    "      /   | |   \\                                                              \n"
    "     /    | |    \\                                                             \n"
    "    /_____|_|_____\\                                                   \n"
    "         |(_)|                                                            \n"
    "        /|||||\\                                                        \n"
    "       //|||||\\\\  \n";
    
    std::string hizli_gemi_resmi =
    "              /\\    |    /\\                                       \n"
    "             /__\\  / \\  /__\\                                    \n"
    "             |  | /   \\ |  |                                      \n"
    "             |  |/_____\\|  |                                      \n"
    "             |  || (_) ||  |                                       \n"
    "             |  ||     ||  |                                       \n"
    "             |  || ETU ||  |                                        \n"
    "             |  ||_____||  |                                        \n"
    "             |  /|  |  |\\  |                                        \n"
    "             | / |  |  | \\ |                                        \n"
    "             |/  |  |  |  \\|                                        \n"
    "             /   |  |  |   \\                                        \n"
    "            /    |  |  |    \\                                      \n"
    "           /     |  |  |     \\                                      \n"
    "          /______|__|__|______\\                                     \n"
    "            |__| |(_)| |__|                                         \n"
    "             |  /|||||\\  |                                          \n"
    "             | //|||||\\\\ |                                         \n";
    

    std::string guclu_gemi_resmi =
    "                                           |                              \n"
    "                                          / \\                              \n"
    "                                         /   \\                                \n"
    "                                        /_____\\                                 \n"
    "                                       /  | |  \\                                 \n"
    "                                      /   | |   \\                                  \n"
    "                                     /   /ETU\\   \\                                    \n"
    "                                    /___/ | |_\\___\\                                  \n"
    "                                    |  /  | |  \\  |                              \n"
    "                                    | /   | |   \\ |                               \n"
    "                                    |/    | |    \\|                                \n"
    "                                    /     | |     \\                                      \n"
    "                                   /      | |      \\                                        \n"
    "                                  /       | |       \\                                        \n"
    "                                 /________|_|________\\                                          \n"
    "                                    |_____(_)_____|                                    \n"
    "                                       /|||||\\                                  \n"
    "                                      //|||||\\\\                       \n";
namespace hesaplama_secim {

    void puan(IGemi & gemi){
        const int gemi_yakit_puan_katsayi{5};
        const int gemi_saglik_puan_katsayi{10};
        const int gemi_para_puan_katsayi{10};
        int puan{0};
        puan = ((gemi.yakit * gemi_yakit_puan_katsayi) + (gemi.saglik * gemi_saglik_puan_katsayi) + (gemi.para * gemi_para_puan_katsayi));
        std::cout << "SAGLIK: " << gemi.saglik << "\n";
        std::cout << "YAKIT: " << gemi.yakit << "\n";
        std::cout << "ALTIN: " << gemi.para << "\n";
        std::cout <<" KAZANILAN PUAN: " << puan << "\n";
    }

    std::unique_ptr<IGemi> gemi_secim() {
        while (true){
            int gemi_secimi{0};
            std::cout << "           |                               /\\    |    /\\                                       |                              " << "\n";
            std::cout << "          / \\                             /__\\  / \\  /__\\                                     / \\                              " << "\n";
            std::cout << "         /   \\                            |  | /   \\ |  |                                    /   \\                                " << "\n";
            std::cout << "        /_____\\                           |  |/_____\\|  |                                   /_____\\                                 " << "\n";
            std::cout << "        | (_) |                           |  || (_) ||  |                                  /  | |  \\                                 " << "\n";
            std::cout << "        |     |                           |  ||     ||  |                                 /   | |   \\                                  " << "\n";
            std::cout << "        | ETU |                           |  || ETU ||  |                                /   /ETU\\   \\                                   " << "\n";
            std::cout << "        |  _  |                           |  ||_____||  |                               /___/ | |_\\___\\                                  " << "\n";
            std::cout << "        | | | |                           |  /|  |  |\\  |                               |  /  | |  \\  |                              " << "\n";
            std::cout << "        | | | |                           | / |  |  | \\ |                               | /   | |   \\ |                               " << "\n";
            std::cout << "        | | | |                           |/  |  |  |  \\|                               |/    | |    \\|                                " << "\n";
            std::cout << "       /  | |  \\                          /   |  |  |   \\                               /     | |     \\                                      " << "\n";
            std::cout << "      /   | |   \\                        /    |  |  |    \\                             /      | |      \\                                        " << "\n";
            std::cout << "     /    | |    \\                      /     |  |  |     \\                           /       | |       \\                                        " << "\n";
            std::cout << "    /_____|_|_____\\                    /______|__|__|______\\                         /________|_|________\\                                         " << "\n";
            std::cout << "         |(_)|                            |__| |(_)| |__|                               |_____(_)_____|                                    " << "\n";
            std::cout << "        /|||||\\                            |  /|||||\\  |                                    /|||||\\                                  " << "\n";
            std::cout << "       //|||||\\\\                           | //|||||\\\\ |                                   //|||||\\\\                                   " << "\n\n";
            std::cout << "      Normal Gemi                            Hizli Gemi                                    Guclu Gemi "<< "\n";
            std::cout << "Gemi Sec 1)GUCLU GEMI, 2)HIZLI GEMI, 3)NORMAL GEMI"<< "\n";
            std::cin  >> gemi_secimi ;
            
            switch (gemi_secimi) {
                case 1:
                    std::cout << guclu_gemi_resmi;
                    std::cout << "Guclu Gemi Secildi" << "\n";
                    return std::make_unique<guclu_gemi>();
                case 2:
                    std::cout << hizli_gemi_resmi;
                    std::cout << "Hizli Gemi Secildi" << "\n";
                    return std::make_unique<hizli_gemi>();
                case 3:
                    std::cout << normal_gemi_resmi;
                    std::cout << "Normal Gemi Secildi" << "\n";
                    return std::make_unique<normal_gemi>();
                default:
                    std::cout << "Gecersiz sayi girisi." << std::endl;
                    break;
            }
        }
    }
    std::unique_ptr<IEvent> event_secim() {
        const int event_sayisi{3};
        switch (randomsayi() % event_sayisi+1) {
            case 1:
                std::cout << "ASTEROID EVENT" << "\n";
                return std::make_unique<asteroid_event>();
            case 2:
                std::cout << "TERKEDILMIS GEZEGEN" << "\n";
                return std::make_unique<gezegen_event>();
            case 3:
                std::cout << "UZAY KORSANLARI" << "\n";
                return std::make_unique<uzay_korsanlari_event>();
        }
    }
}


#endif //COSMIC_VOYAGER_ADJUNCTLECTURER_HESAPLAMA_SECIM_H
