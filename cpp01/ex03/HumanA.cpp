#include "HumanA.hpp"
#include "Weapon.hpp"
#include <string>
#include <iostream>

void HumanA::attack( void ){
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon const &weapon)
: _name(name), _weapon(weapon){
	return	;
}

HumanA::~HumanA(){
	return	;
}