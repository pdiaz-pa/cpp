#include "ClapTrap.hpp"

int main( void ){
    

    ClapTrap pepe("uno");
    ClapTrap curro("dos");

    pepe.attack(curro.getName());
    curro.takeDamage(100);
    curro.beRepaired(5);
    return (0);
}