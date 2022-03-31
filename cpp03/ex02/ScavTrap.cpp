#include "ScavTrap.hpp"


ScavTrap::ScavTrap(std::string name){
    _name = name;
    _hitpoints = 100;
    _energypoints = 100;
    _attackdamage = 30;
    std::cout << "ScavTrap created. Name->" << _name << " Hitpoints->" << _hitpoints << " Energypoints->" << _energypoints << " Attack damage->" << _attackdamage << std::endl;
}

ScavTrap::ScavTrap(){

}

ScavTrap & ScavTrap::operator=(ScavTrap & rhs){
	if (this != &rhs){
		this->_attackdamage = rhs._attackdamage;
		this->_energypoints = rhs._energypoints;
		this->_hitpoints = rhs._hitpoints;
		this->_name = rhs._name;
	}
	return (*this);
}

ScavTrap::ScavTrap(ScavTrap & src){
	*this = src;
	return;
}

ScavTrap::~ScavTrap(){
    std::cout << "Scavtrap destroyed->" << _name <<  std::endl;
}