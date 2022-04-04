#pragma once
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
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