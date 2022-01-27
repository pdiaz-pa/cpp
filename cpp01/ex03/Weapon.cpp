#include "Weapon.hpp"

std::string const  &Weapon::getType() const{
	return this->_type;
}

void Weapon::setType(std::string weapontype){
	this->_type = weapontype;
}

Weapon::Weapon(std::string type)
:_type(type){
}


Weapon::~Weapon()
{
}