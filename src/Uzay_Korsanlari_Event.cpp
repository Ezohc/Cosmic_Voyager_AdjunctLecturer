//
// Created by Enis on 11.03.2024.
//
#include "Uzay_Korsanlari_Event.h"

    void uzay_korsanlari_event::event(IGemi& gemi) {
    bool pazarlik_hakki{true};
    int secim{0};
    bool kosul{true};
    while (kosul) {
        std::cout << "KAC(1), SAVAS(2) YA DA PAZARLIK ET(3)" << "\n";
        std::cin >> secim;
        switch (secim) {
            case 1:
                if (gemi.yakit >= kaybedilen_yakit) {
                    gemi.yakit = gemi.yakit - kaybedilen_yakit;

                if (gemi.kacma_ihtimali < (randomsayi() % 10 + 1)) {
                    kosul = false;
                    std::cout << "KACMAYI BASARDIN !!!!" << "\n";
                    std::cout << "Kalan Yakit: " << gemi.yakit << "\n";
                } else {
                    kosul = true;
                    std::cout << "KACAMADINN SANA YETISTILER ne yapicaksin ? !!!!" << "\n";
                    std::cout << "Kalan Yakit: " << gemi.yakit << "\n";
                }
                } else {
                    std::cout << "YETERSIZ YAKIT SAVAS YA DA PAZARLIK ET(10,20 ya da 30 altin)" << "\n";
                    kosul = true;
                }
            break;
            case 2:
                kosul = false;
                if (savas_kazanma_olasiligi < (randomsayi() % 10 + 1)) {
                    std::cout << "SAVASI KAZANDIN !!!!" << "\n";
                    std::cout << "saglik: " << gemi.saglik << "\n";
                } else {
                    gemi.saglik = gemi.saglik - alinan_hasar * gemi.alinan_hasar_kat;
                    std::cout << "SAVASI KAYBETTIN" << "\n";
                    if(gemi.saglik <= olum_kosulu){
                        std::cout << "GEBERDIN"<<"\n";
                        gemi.saglik = olum_kosulu;
                    }
                    std::cout << "saglik: " << gemi.saglik << "\n";
                }
            break;
            case 3:
                if (pazarlik_hakki)
                {
                if (pazarlik_olasiligi_1 >= (randomsayi() % 10 + 1))
                {
                    std::cout << "UZAY_KORSANLARI SENDEN 10 ALTIN ISTEDI" << "\n";
                if (gemi.para >= pazarlik_olasiligi_1_altin_miktari)
                {
                    kosul = false;
                    gemi.para = gemi.para - pazarlik_olasiligi_1_altin_miktari;
                    std::cout << "UZAY_KORSANLARI ILE 10 ALTINA ANLASTIN" << "\n";
                } else
                {
                    kosul = true;
                    std::cout << "YETERSIZ BAKIYE KAC YA DA SAVAS" << "\n";
                    pazarlik_hakki = false;
                }
                } else if (pazarlik_olasiligi_2 >= (randomsayi() % 10 + 1))
                {
                    std::cout << "UZAY_KORSANLARI SENDEN 20 ALTIN ISTEDI" << "\n";
                    if (gemi.para >= pazarlik_olasiligi_2_altin_miktari)
                {
                    kosul = false;
                    gemi.para = gemi.para - pazarlik_olasiligi_2_altin_miktari;
                    std::cout << "UZAY_KORSANLARI ILE 20 ALTINA ANLASTIN" << "\n";
                } else
                {
                    kosul = true;
                    std::cout << "YETERSIZ BAKIYE KAC YA DA SAVAS" << "\n";
                    pazarlik_hakki = false;
                }
                } else if (pazarlik_olasiligi_3 >= (randomsayi() % 10 + 1))
                {
                    std::cout << "UZAY_KORSANLARI SENDEN 30 ALTIN ISTEDI" << "\n";
                if (gemi.para >= pazarlik_olasiligi_3_altin_miktari)
                {
                    kosul = false;
                    gemi.para = gemi.para - pazarlik_olasiligi_3_altin_miktari;
                    std::cout << "UZAY_KORSANLARI ILE 30 ALTINA ANLASTIN" << "\n";
                } else
                {
                    kosul = true;
                    std::cout << "YETERSIZ BAKIYE KAC YA DA SAVAS" << "\n";
                    pazarlik_hakki = false;
                }
                }
                }
                else
                {
                    kosul = true;
                    std::cout << "UZAY_KORSANLARI DAHA FAZLA PAZARLIK YAPMAK ISTEMIYOR"<<"\n";
                    std::cout << "KAC YA DA SAVAS"<<"\n";
                }
                break;
                default:
                    kosul = true;
                    std::cout << "GECERSIZ NUMARA DOGRU BIR SAYI GIRINIZ"<<"\n";
            break;
            }
    }
}
