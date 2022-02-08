#include "ClapTrap.hpp"

void    ClapTrap::attack(std::string const & target){
    std::cout << "Claptrap " << this->_name << " attack " << target << " causing " << this->_attackdamage << " points of damage!" << std::endl;
    
}
void    ClapTrap::takeDamage(unsigned int amount){
    this->_hitpoints = this->_hitpoints - amount;
    std::cout << "Claptrap " << this->_name << " was attacked and received " << amount << " points of damage! Energy points left: " << this->_hitpoints << std::endl;
}
void    ClapTrap::beRepaired(unsigned int amount){
    this->_energypoints = this->_hitpoints + amount;
    this->_hitpoints = this->_energypoints;
    std::cout << "Claptrap " << this->_name << " was repaired and received " << amount << " points of health! Energy points left: " << this->_hitpoints << std::endl;
}

std::string ClapTrap::getName( void ){
    return (this->_name);
}
void ClapTrap::setName( std::string name ){
    this->_name = name;
}

ClapTrap::ClapTrap(){
    std::cout << "Standard Claptrap created" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _hitpoints(10), _energypoints(10), _attackdamage(0){
    this->_name = name;
    std::cout << "Claptrap created->" << name << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Claptrap destroyed->" << this->_name << std::endl;
}
