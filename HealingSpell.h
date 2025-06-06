#ifndef HEALINGSPELL_H
#define HEALINGSPELL_H

#include "Spell.h"
#include <cstdlib> 
#include <string>
#include <ctime>   

class HealingSpell : public Spell {
private:
    int basicHealing;
    int realHealing;

public:
    HealingSpell();
    HealingSpell(const HealingSpell& otro);
    HealingSpell(int healing);

    int getPower() const override;
    void launch() override;
    std::string toString() const override;
};

#endif 
