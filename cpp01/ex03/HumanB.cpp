#include "HumanB.hpp"
#include <string>
#include <iostream>

void HumanB::attack( void ){
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weapon){
	this->_weapon = &weapon;
}

HumanB::HumanB(std::string name){
	this->_name = name;
}

HumanB::~HumanB(){
	
}