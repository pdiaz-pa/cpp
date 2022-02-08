#include "ScavTrap.hpp"


void    ScavTrap::attack(std::string const & target){
    std::cout << "Claptrap " << this->_name << " hit " << target << " giving " << this->_attackdamage << " points of damage!" << std::endl;
    
}
void    ScavTrap::takeDamage(unsigned int amount){
    this->_hitpoints = this->_hitpoints - amount;
    std::cout << "Claptrap " << this->_name << " was attacked and received " << amount << " points of damage! Energy points left: " << this->_hitpoints << std::endl;
}
void    ScavTrap::beRepaired(unsigned int amount){
    this->_energypoints = this->_hitpoints + amount;
    this->_hitpoints = this->_energypoints;
    std::cout << "Claptrap " << this->_name << " was repaired and received " << amount << " points of health! Energy points left: " << this->_hitpoints << std::endl;
}
void    ScavTrap::guardGate(){
     std::cout << "ScavTrap have enterred in Gate keeper mode" << std::endl;
}

ScavTrap::ScavTrap(std::string name){
    _name = name;
    _hitpoints = 100;
    _energypoints = 100;
    _attackdamage = 30;
    std::cout << "ScavTrap created" << std::endl;
}
ScavTrap::~ScavTrap(){
    std::cout << "Scavtrap destroyed->" << _name <<  std::endl;
}