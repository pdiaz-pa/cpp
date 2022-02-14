#include "FrogTrap.hpp"

FrogTrap::FrogTrap(std::string name){
    _name = name;
    _hitpoints = 100;
    _energypoints = 50;
    _attackdamage = 20;
    std::cout << "FrogTrap created" << std::endl;
}
FrogTrap::FrogTrap(){
    _name = "unknown";
    _hitpoints = 100;
    _energypoints = 50;
    _attackdamage = 20;
    std::cout << "Default Frogtrap created" <<  std::endl;
}

FrogTrap::~FrogTrap(){
    std::cout << "Frogtrap destroyed->" << _name <<  std::endl;
}

void FrogTrap::highFiveGuys( void ){
    std::cout << _name << ": HIGH FIVE GUYS!!! :v" << std::endl;
}
