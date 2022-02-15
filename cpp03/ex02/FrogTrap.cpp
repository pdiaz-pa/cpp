#include "FrogTrap.hpp"

FrogTrap::FrogTrap(){

}

FrogTrap & FrogTrap::operator=(FrogTrap & rhs){
	if (this != &rhs){
		this->_attackdamage = rhs._attackdamage;
		this->_energypoints = rhs._energypoints;
		this->_hitpoints = rhs._hitpoints;
		this->_name = rhs._name;
	}
}

FrogTrap::FrogTrap(FrogTrap & src){
	*this = src;
	return;
}

FrogTrap::FrogTrap(std::string name){
    _name = name;
    _hitpoints = 100;
    _energypoints = 50;
    _attackdamage = 20;
    std::cout << "FrogTrap created" << _name << std::endl;
}
FrogTrap::~FrogTrap(){
    std::cout << "Frogtrap destroyed->" << _name <<  std::endl;
}

void FrogTrap::highFiveGuys( void ){
    std::cout << _name << ": HIGH FIVE GUYS!!! :v" << std::endl;
}
