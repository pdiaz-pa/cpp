#pragma once
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
    
public:
    void    attack(std::string const & target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
    void    guardGate();
    ScavTrap(std::string name);
    ~ScavTrap();
};

