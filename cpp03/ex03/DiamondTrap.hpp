#pragma once
#include "FrogTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FrogTrap, public ScavTrap
{
private:
	std::string _name;
public:
	DiamondTrap & operator=(DiamondTrap const & rhs);
	DiamondTrap(DiamondTrap const & src);
    DiamondTrap(std::string name);
    DiamondTrap();
    ~DiamondTrap();
	void whoAmI( void );
	using ScavTrap::attack;
};

