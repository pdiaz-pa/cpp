#include "Zombie.hpp"

void randomChump( std::string name ){
    Zombie newZom;
    newZom.setName(name);
    newZom.announce();
}