#include "Zombie.hpp"

Zombie* newZombie( std::string name ){
    Zombie *newZom = new Zombie();
    newZom->setName(name);
    newZom->announce();
    return (newZom);
}