//
// Created by Enis on 9.03.2024.
//

#ifndef COSMIC_VOYAGER_ADJUNCTLECTURER_GEZEGEN_EVENT_H
#define COSMIC_VOYAGER_ADJUNCTLECTURER_GEZEGEN_EVENT_H

#include "IEvent.h"
#include <memory>
#include "Uzay_Korsanlari_Event.h"
class gezegen_event : public IEvent{

public:

    void event(IGemi& gemi) override;

private:
    const int gezegen_altin_olasiligi{5};
    const int altin_miktari{10};
protected:

};

#endif //COSMIC_VOYAGER_ADJUNCTLECTURER_GEZEGEN_EVENT_H
