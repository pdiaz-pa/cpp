#include "ScavTrap.hpp"

void    ScavTrap::attack(std::string const & target){
    std::cout << "OMG!! ScavTrap " << this->_name << " is hitting " << target << " and he causes " << this->_attackdamage << " points of damage!" << std::endl;
}

void    ScavTrap::guardGate(){
     std::cout << "ScavTrap has entered in Gate keeper mode" << std::endl;
}

ScavTrap::ScavTrap(std::string name){
    this->_name = name;
    this->_hitpoints = 100;
    //this->_energypoints = 50;
    this->_attackdamage = 20;
    std::cout << "ScavTrap created. Name->" << _name << " Hitpoints->" << _hitpoints << " Energypoints->" << _energypoints << " Attack damage->" << _attackdamage << std::endl;
}

ScavTrap::ScavTrap(){
    this->_name = "defaultScav";
    this->_hitpoints = 100;
    //this->_energypoints = 50;
    this->_attackdamage = 20;
    std::cout << "Default Scavtrap created" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap & rhs){
	if (this != &rhs){
		this->_attackdamage = rhs._attackdamage;
		//this->_energypoints = rhs._energypoints;
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