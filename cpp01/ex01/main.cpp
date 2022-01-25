#include "Zombie.hpp"

int main ( void ){
    Zombie* zombies;
    zombies = zombieHord(6, "EL PEPE");
    delete [] zombies;
    return (0);
}