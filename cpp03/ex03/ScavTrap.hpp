#pragma once
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
protected:
    static const int _energypoints = 50;
public:
    void    guardGate();
    void    attack(std::string const & target);
	ScavTrap & operator=(ScavTrap & rhs);
	ScavTrap(ScavTrap & src);
    ScavTrap(std::string name);
	ScavTrap();
    ~ScavTrap();
};

