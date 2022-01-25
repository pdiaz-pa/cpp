#include "Zombie.hpp"
#include <iostream>
void Zombie::setName ( std::string name ){
    this->_name = name;
}

void Zombie::announce ( void ){
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie( void ){
    return;
}
Zombie::~Zombie( void ){
    std::cout << this->_name << " destruido" << std::endl;
    return;
}
