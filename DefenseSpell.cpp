#include "DefenseSpell.h"
#include <sstream>

DefenseSpell::DefenseSpell() : basicDefense(1), realDefense(1) {
    
}

DefenseSpell::DefenseSpell(const DefenseSpell& otro)
    : basicDefense(otro.basicDefense), realDefense(otro.realDefense) {
    
}

DefenseSpell::DefenseSpell(int defense) : basicDefense(defense), realDefense(defense) {
    
}

int DefenseSpell::getPower() const {
    return basicDefense;
}

void DefenseSpell::launch() {
    int variation = (rand() % 11) - 5;
    realDefense = basicDefense + variation;
}

std::string DefenseSpell::toString() const {
    std::stringstream ss;
    ss << "Hechizo de Defensa: Defensa real = " << realDefense;
    return ss.str();
}

