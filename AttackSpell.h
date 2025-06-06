#ifndef ATTACKSPELL_H
#define ATTACKSPELL_H

#include "Spell.h" 
#include <cstdlib> 
#include <string>  
#include <ctime>  


class AttackSpell : public Spell {
private:
    int basicDamage; 
    int realDamage;  

public:
    // Constructores
    AttackSpell();                 
    AttackSpell(const AttackSpell& otro); 
    AttackSpell(int damage);      

    
    int getPower() const override;
    void launch() override;
    std::string toString() const override;
};

#endif 
