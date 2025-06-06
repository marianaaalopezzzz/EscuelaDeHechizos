#ifndef SPELL_H
#define SPELL_H

#include <string>
#include <iostream> 


class Spell {
public:
    virtual int getPower() const = 0;
    virtual void launch() = 0;
    virtual std::string toString() const = 0;

    
    bool operator<(const Spell& otro) const {
        return this->getPower() < otro.getPower();
    }

    bool operator==(const Spell& otro) const {
        return this->getPower() == otro.getPower();
    }

    // Destructor 
    virtual ~Spell() {}
};

#endif 
