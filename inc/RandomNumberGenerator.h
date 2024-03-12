//
// Created by Enis on 9.03.2024.
//

#ifndef COSMIC_VOYAGER_ADJUNCTLECTURER_RANDOMNUMBERGENERATOR_H
#define COSMIC_VOYAGER_ADJUNCTLECTURER_RANDOMNUMBERGENERATOR_H

#include <iostream>
#include <random>
////BU KODDA EKSTRA OLARAK INLINE KULLANMAMIZ GEREKTI CUNKU MULTIPLE DEFINATION HATASI ALIYORDUK .h ile .cpp yi ayırdıgımızda.
inline int randomsayi() {
    // C++11 ve sonraki standartlarda önerilen bir seed kullanarak rasgele sayı üretme //INTERNETTEN ALINDI//
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(1, 100);  // 1 ile 100 arasında rasgele bir tam sayı

    int rasgeleSayi = dis(gen);
    return rasgeleSayi;
}




#endif //COSMIC_VOYAGER_ADJUNCTLECTURER_RANDOMNUMBERGENERATOR_H
