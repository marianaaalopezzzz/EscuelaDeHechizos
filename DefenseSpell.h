#ifndef DEFENSESPELL_H
#define DEFENSESPELL_H

#include "Spell.h"
#include <cstdlib> 
#include <string>
#include <ctime>   

class DefenseSpell : public Spell {
private:
    int basicDefense;
    int realDefense;

public:
    DefenseSpell();
    DefenseSpell(const DefenseSpell& otro);
    DefenseSpell(int defense);

    int getPower() const override;
    void launch() override;
    std::string toString() const override;
};

#endif 
