#pragma once
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:
    
public:
    void    guardGate();
	ScavTrap & operator=(ScavTrap & rhs);
	ScavTrap(ScavTrap & src);
	ScavTrap();
    ScavTrap(std::string name);
    ScavTrap();
    ~ScavTrap();
};

