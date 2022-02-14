#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name){
	_name = name;
	ClapTrap::_name = name + "_clap_name";
	_hitpoints = FrogTrap::_hitpoints;
	_energypoints = ScavTrap::_energypoints;
	_attackdamage = FrogTrap::_attackdamage;
    std::cout << "Diamondtrap created. Name->" << _name << " Hitpoints->" << _hitpoints << " Energypoints->" << _energypoints << " Attack damage->" << _attackdamage << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destroyed" << std::endl;
}

void DiamondTrap::whoAmI( void ){
	std::cout << "Hey, I'm " << _name << ", and this is my claptrap name: " << ClapTrap::_name << std::endl;
}