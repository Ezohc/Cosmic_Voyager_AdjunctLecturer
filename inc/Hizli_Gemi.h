//
// Created by Enis on 9.03.2024.
//

#ifndef COSMIC_VOYAGER_ADJUNCTLECTURER_HIZLI_GEMI_H
#define COSMIC_VOYAGER_ADJUNCTLECTURER_HIZLI_GEMI_H

#include "IGemi.h"

class hizli_gemi : public IGemi{

    public:
        hizli_gemi() {
            kacma_ihtimali = kacma_ihtimali * hizli_kacma_katsayi;
            alinan_hasar_kat = alinan_hasar_kat * hizli_hasar_katsayi;
            std::cout << "hizli gemiye binildi"<< "\n";
    }

    private:
        const double hizli_kacma_katsayi{1.5};
        const double hizli_hasar_katsayi{1.5};
    protected:

};

#endif //COSMIC_VOYAGER_ADJUNCTLECTURER_HIZLI_GEMI_H
