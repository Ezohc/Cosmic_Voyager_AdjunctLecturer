
#include "IGemi.h"
#include <memory>
#include "hesaplama_secim.h"
#include "game_run.h"
#include "resimler.h"
int main() {
    hesaplama_secim gemi_event_puan_secim;
    std::unique_ptr<IGemi> secilen_Gemi = gemi_event_puan_secim.gemi_secim();
    Game::Run run;
    run.baslat(*secilen_Gemi);
    gemi_event_puan_secim.puan(*secilen_Gemi);
    return 0;
}
