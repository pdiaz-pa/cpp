#pragma once
#include "FrogTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FrogTrap, public ScavTrap
{
private:
	std::string _name;
public:
    DiamondTrap(std::string name);
    DiamondTrap();
    ~DiamondTrap();
	void whoAmI( void );
	using ScavTrap::attack;
};

