//
// Created by Enis on 11.03.2024.
//

#ifndef COSMIC_VOYAGER_ADJUNCTLECTURER_GAME_RUN_H
#define COSMIC_VOYAGER_ADJUNCTLECTURER_GAME_RUN_H

#include "IGemi.h"
#include "memory"
#include <chrono>
#include <thread>
#include "IEvent.h"
#include "hesaplama_secim.h"
#include "RandomNumberGenerator.h"

namespace game_run {

    void baslat(IGemi& secilen_Gemi){
        int tur{0};
        int eventsayisi{5};
        while(secilen_Gemi.yakit > 0 && secilen_Gemi.saglik > 0 && tur < eventsayisi ){
            std::cout << "EVENT " << (tur + 1) << " BASLIYOR"<<"\n";
            std::this_thread::sleep_for(std::chrono::seconds(3));
            std::unique_ptr<IEvent> random_event = hesaplama_secim::event_secim();
            random_event->event(secilen_Gemi);
            tur = tur + 1;
            std::cout << "EVENT " << tur << " BITTI"<<"\n";
            std::this_thread::sleep_for(std::chrono::seconds(3));
        }
    }

}

#endif //COSMIC_VOYAGER_ADJUNCTLECTURER_GAME_RUN_H
