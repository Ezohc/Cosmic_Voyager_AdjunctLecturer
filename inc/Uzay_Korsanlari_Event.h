//
// Created by Enis on 9.03.2024.
//

#ifndef COSMIC_VOYAGER_ADJUNCTLECTURER_UZAY_KORSANLARI_EVENT_H
#define COSMIC_VOYAGER_ADJUNCTLECTURER_UZAY_KORSANLARI_EVENT_H

#include "IEvent.h"

class uzay_korsanlari_event : public IEvent{

public:
    uzay_korsanlari_event(){
        std::cout << "UZAY KORSANLARI ILE KARSI KARSIYASIN !!!!!!"<<"\n";
    }

    void event(IGemi& gemi) override ;

private:
    const int kaybedilen_yakit{33};
    const int savas_kazanma_olasiligi{5};
    const int alinan_hasar{30};
    const int pazarlik_olasiligi_1{3};
    const int pazarlik_olasiligi_2{7};
    const int pazarlik_olasiligi_3{10};
    const int pazarlik_olasiligi_1_altin_miktari{10};
    const int pazarlik_olasiligi_2_altin_miktari{20};
    const int pazarlik_olasiligi_3_altin_miktari{30};
    const int olum_kosulu{0};
protected:


};

#endif //COSMIC_VOYAGER_ADJUNCTLECTURER_UZAY_KORSANLARI_EVENT_H
