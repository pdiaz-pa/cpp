#include "ScavTrap.hpp"

void    ScavTrap::guardGate(){
     std::cout << "ScavTrap have enterred in Gate keeper mode" << std::endl;
}

ScavTrap::ScavTrap(std::string name){
    _name = name;
    _hitpoints = 100;
    _energypoints = 50;
    _attackdamage = 20;
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
}

ScavTrap::ScavTrap(ScavTrap & src){
	*this = src;
	return;
}

ScavTrap::~ScavTrap(){
    std::cout << "Scavtrap destroyed->" << _name <<  std::endl;
}