#pragma once
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:
    
public:
    void    guardGate();
    ScavTrap(std::string name);
    ScavTrap();
    ~ScavTrap();
};

