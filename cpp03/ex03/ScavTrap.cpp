#include "ScavTrap.hpp"

void    ScavTrap::guardGate(){
     std::cout << "ScavTrap have enterred in Gate keeper mode" << std::endl;
}

ScavTrap::ScavTrap(std::string name){
    _name = name;
    _hitpoints = 100;
    _energypoints = 100;
    _attackdamage = 30;
    std::cout << "ScavTrap created. Name->" << _name << " Hitpoints->" << _hitpoints << " Energypoints->" << _energypoints << " Attack damage->" << _attackdamage << std::endl;
}
ScavTrap::ScavTrap(){
    _name = "unknown";
    _hitpoints = 100;
    _energypoints = 100;
    _attackdamage = 30;
    std::cout << "Default Scavtrap created" << std::endl;
}
ScavTrap::~ScavTrap(){
    std::cout << "Scavtrap destroyed->" << _name <<  std::endl;
}