//
// Created by Enis on 9.03.2024.
//

#ifndef COSMIC_VOYAGER_ADJUNCTLECTURER_GUCLU_GEMI_H
#define COSMIC_VOYAGER_ADJUNCTLECTURER_GUCLU_GEMI_H

#include "IGemi.h"

class guclu_gemi : public IGemi{

    public:
    guclu_gemi() {
        kacma_ihtimali = kacma_ihtimali * guclu_kacma_katsayi;
        alinan_hasar_kat = alinan_hasar_kat * guclu_hasar_katsayi;
        std::cout << "guclu gemiye binildi"<< "\n";
    }



    private:

    protected:
    const double guclu_kacma_katsayi{0.5};
    const double guclu_hasar_katsayi{0.5};

};
#endif //COSMIC_VOYAGER_ADJUNCTLECTURER_GUCLU_GEMI_H
