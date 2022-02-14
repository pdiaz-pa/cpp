#include "ScavTrap.hpp"


void    ScavTrap::attack(std::string const & target){
    std::cout << "Claptrap " << this->_name << " hit " << target << " giving " << this->_attackdamage << " points of damage!" << std::endl;
    
}
ScavTrap::ScavTrap(std::string name){
    _name = name;
    _hitpoints = 100;
    _energypoints = 100;
    _attackdamage = 30;
    std::cout << "ScavTrap created. Name->" << _name << " Hitpoints->" << _hitpoints << " Energypoints->" << _energypoints << " Attack damage->" << _attackdamage << std::endl;
}
ScavTrap::~ScavTrap(){
    std::cout << "Scavtrap destroyed->" << _name <<  std::endl;
}