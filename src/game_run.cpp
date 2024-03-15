//
// Created by Enis on 15.03.2024.
//
#include "game_run.h"

void Game::Run::baslat(IGemi &secilen_Gemi) {
    while(secilen_Gemi.yakit > yakit_kosulu && secilen_Gemi.saglik > saglik_kosulu && tur < eventsayisi ){
        std::cout << "EVENT " << (tur + tur_artis_sayisi) << " BASLIYOR"<<"\n\n";
        std::this_thread::sleep_for(std::chrono::seconds(3));
        hesaplama_secim event;
        std::unique_ptr<IEvent> random_event = event.event_secim();
        random_event->event(secilen_Gemi);
        tur = tur + tur_artis_sayisi;
        std::cout << "EVENT " << tur << " BITTI"<<"\n\n";
        std::this_thread::sleep_for(std::chrono::seconds(3));
    }
}