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
#include "resimler.h"
#include <chrono>
#include <thread>


class hesaplama_secim {

    public:
   inline void puan(const IGemi &gemi) const { // burada fantastik bir const kullanimi yaptik. const olabiliyor cunku ne geminin degerleri degisiyor ne de classin uye degerlerı degisiyor
        int puan{0};
        puan = ((gemi.yakit * gemi_yakit_puan_katsayi) + (gemi.saglik * gemi_saglik_puan_katsayi) + (gemi.para * gemi_para_puan_katsayi));
        std::cout << "SAGLIK: " << gemi.saglik << "\n";
        std::cout << "YAKIT: " << gemi.yakit << "\n";
        std::cout << "ALTIN: " << gemi.para << "\n";
        std::cout <<"    KAZANILAN PUAN: " << puan << "\n";
    }

    std::unique_ptr<IGemi> gemi_secim();

    const std::unique_ptr<IEvent> event_secim();//fonksiyonda deger degisikligi olmuyor sadece event donuyor o yuzden const kullandik

    private:
    const int gemi_yakit_puan_katsayi{5};
    const int gemi_saglik_puan_katsayi{10};
    const int gemi_para_puan_katsayi{10};

    const int event_sayisi{3};
    int gemi_secimi{0};

};


#endif //COSMIC_VOYAGER_ADJUNCTLECTURER_HESAPLAMA_SECIM_H
