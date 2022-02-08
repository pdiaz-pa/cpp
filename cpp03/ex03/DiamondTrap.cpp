#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name){
    _name = name;
    _hitpoints;
    std::cout << "DiamondTrap created" << _name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
}
