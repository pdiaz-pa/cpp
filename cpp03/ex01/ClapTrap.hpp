#pragma once

#include <string>
#include <iostream>

class ClapTrap
{
protected:

public:
    int _hitpoints;
    int _energypoints;
    int _attackdamage;
    std::string _name;
    void    attack(std::string const & target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
    std::string getName( void );
    void setName( std::string name );
    ClapTrap(std::string name);
    ClapTrap();
    ~ClapTrap();
};
