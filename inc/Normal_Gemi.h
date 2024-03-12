//
// Created by Enis on 9.03.2024.
//

#ifndef COSMIC_VOYAGER_ADJUNCTLECTURER_NORMAL_GEMI_H
#define COSMIC_VOYAGER_ADJUNCTLECTURER_NORMAL_GEMI_H

#include "IGemi.h"

class normal_gemi : public IGemi{

    public:
        normal_gemi() {
            kacma_ihtimali = kacma_ihtimali * normal_kacma_katsayi;
            alinan_hasar_kat = alinan_hasar_kat * normal_hasar_katsayi;
            std::cout << "normal gemiye binildi"<< "\n";
        }



    private:
    const double normal_kacma_katsayi{1};
    const double normal_hasar_katsayi{1};
    protected:


    };
#endif //COSMIC_VOYAGER_ADJUNCTLECTURER_NORMAL_GEMI_H
