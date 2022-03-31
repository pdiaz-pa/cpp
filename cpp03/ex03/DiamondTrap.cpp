#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){
	std::cout << "Standard DiamondTrap created" <<  std::endl;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & rhs){
	if (this != &rhs){
		this->_attackdamage = rhs._attackdamage;
		this->_energypoints = rhs._energypoints;
		this->_hitpoints = rhs._hitpoints;
		this->_name = rhs._name;
	}
	return(*this);
}

DiamondTrap::DiamondTrap(DiamondTrap const & src){
	*this = src;
	return;
}

DiamondTrap::DiamondTrap(std::string name){
	_name = name;
	ClapTrap::_name = name + "_clap_name";
	_hitpoints = FrogTrap::_hitpoints;
	_energypoints = DiamondTrap::_energypoints;
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