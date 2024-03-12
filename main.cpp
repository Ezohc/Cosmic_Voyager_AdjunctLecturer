
#include "IGemi.h"
#include <memory>
#include "hesaplama_secim.h"
#include "game_run.h"

int main() {
    std::unique_ptr<IGemi> secilen_Gemi = hesaplama_secim::gemi_secim();
    game_run::baslat(*secilen_Gemi);
    hesaplama_secim::puan(*secilen_Gemi);
    return 0;
}
