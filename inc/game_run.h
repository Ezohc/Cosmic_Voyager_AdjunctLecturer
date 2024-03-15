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

namespace Game {

    class Run {
        public:

            void baslat(IGemi& secilen_Gemi);

        private:
            int tur{0};
            const int tur_artis_sayisi{1};
            const int eventsayisi{5};
            const int saglik_kosulu{0};
            const int yakit_kosulu{0};
    };


}

#endif //COSMIC_VOYAGER_ADJUNCTLECTURER_GAME_RUN_H
