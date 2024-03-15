//
// Created by Enis on 9.03.2024.
//

#ifndef COSMIC_VOYAGER_ADJUNCTLECTURER_ASTEROID_EVENT_H
#define COSMIC_VOYAGER_ADJUNCTLECTURER_ASTEROID_EVENT_H

#include "IEvent.h"
#include <memory>
#include <iostream>
#include "RandomNumberGenerator.h"
#include "IGemi.h"


class asteroid_event : public IEvent{

public:

    void event(IGemi& gemi) override;

private:

protected:
    const int olme_kosulu{0};
    const int Hasar{10};

};

#endif //COSMIC_VOYAGER_ADJUNCTLECTURER_ASTEROID_EVENT_H
