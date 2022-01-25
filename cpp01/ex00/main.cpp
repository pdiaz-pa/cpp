#include "Zombie.hpp"

int main ( void ){
    Zombie* nZomb;
    randomChump("El Pepe");
    nZomb = newZombie("Armando");
    delete nZomb;
    return(0);
}