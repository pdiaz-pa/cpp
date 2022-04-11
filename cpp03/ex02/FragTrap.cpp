#include "FragTrap.hpp"

void    FragTrap::attack(std::string const & target){
    std::cout << "FragTrap " << this->_name << " is beating " << target << " causing " << this->_attackdamage << " points of damage to him!" << std::endl;
    
}

FragTrap::FragTrap(){
    this->_name = "defaultfrag";
    _hitpoints = 100;
    _energypoints = 100;
    _attackdamage = 30;
    std::cout << "Standard FragTrap created" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap & rhs){
	if (this != &rhs){
		this->_attackdamage = rhs._attackdamage;
		this->_energypoints = rhs._energypoints;
		this->_hitpoints = rhs._hitpoints;
		this->_name = rhs._name;
	}
	return (*this);
}

FragTrap::FragTrap(FragTrap & src){
	*this = src;
	return;
}

FragTrap::FragTrap(std::string name){
    _name = name;
    _hitpoints = 100;
    _energypoints = 100;
    _attackdamage = 30;
    std::cout << "FragTrap created. Name->" << _name << " Hitpoints->" << _hitpoints << " Energypoints->" << _energypoints << " Attack damage->" << _attackdamage << std::endl;
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap destroyed->" << _name <<  std::endl;
}

void FragTrap::highFiveGuys( void ){
    std::cout << _name << ": HIGH FIVE GUYS!!! :v" << std::endl;
}
