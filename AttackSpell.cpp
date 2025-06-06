#include "AttackSpell.h"
#include <sstream> 

// Constructor por defecto
AttackSpell::AttackSpell() : basicDamage(1), realDamage(1) {
}    

// Constructor de copia
AttackSpell::AttackSpell(const AttackSpell& otro)
    : basicDamage(otro.basicDamage), realDamage(otro.realDamage) {
    
}

// Constructor con parámetro
AttackSpell::AttackSpell(int damage) : basicDamage(damage), realDamage(damage) {
    
}

// Retorna el poder base del hechizo de ataque
int AttackSpell::getPower() const {
    return basicDamage;
}

// Calcula el daño real 
void AttackSpell::launch() {
    int variation = (rand() % 21) - 10;
    realDamage = basicDamage + variation;
}

std::string AttackSpell::toString() const {
    std::stringstream ss;
    ss << "Hechizo de Ataque: Daño real = " << realDamage;
    return ss.str();
}
