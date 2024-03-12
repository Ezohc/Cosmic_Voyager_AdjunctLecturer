//
// Created by Enis on 9.03.2024.
//

#ifndef COSMIC_VOYAGER_ADJUNCTLECTURER_IEVENT_H
#define COSMIC_VOYAGER_ADJUNCTLECTURER_IEVENT_H

#include "RandomNumberGenerator.h"
#include "IGemi.h"

class IEvent{
    public:

    virtual void event(IGemi& gemi) = 0;

    private:

    protected:

};



#endif //COSMIC_VOYAGER_ADJUNCTLECTURER_IEVENT_H
