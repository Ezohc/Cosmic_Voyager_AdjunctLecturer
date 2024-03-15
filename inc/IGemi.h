//
// Created by Enis on 9.03.2024.
//

#ifndef COSMIC_VOYAGER_ADJUNCTLECTURER_IGEMI_H
#define COSMIC_VOYAGER_ADJUNCTLECTURER_IGEMI_H
#include <vector>
#include <iostream>

class IGemi{
    public:

    IGemi() : saglik{100},para{0},yakit{100},kacma_ihtimali{5},alinan_hasar_kat{1} {}

    double saglik;
    int para;
    int yakit;
    double kacma_ihtimali;
    double  alinan_hasar_kat;

    private:

    protected:


};

#endif //COSMIC_VOYAGER_ADJUNCTLECTURER_IGEMI_H
