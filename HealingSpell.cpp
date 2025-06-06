#include "HealingSpell.h"
#include <sstream>

HealingSpell::HealingSpell() : basicHealing(1), realHealing(1) {
}

HealingSpell::HealingSpell(const HealingSpell& otro)
    : basicHealing(otro.basicHealing), realHealing(otro.realHealing) {
}

HealingSpell::HealingSpell(int healing) : basicHealing(healing), realHealing(healing) {
}

int HealingSpell::getPower() const {
    return basicHealing;
}

void HealingSpell::launch() {
    int variation = (rand() % 17) - 8;
    realHealing = basicHealing + variation;
}

std::string HealingSpell::toString() const {
    std::stringstream ss;
    ss << "Hechizo de Curación: Curación real = " << realHealing;
    return ss.str();
}
