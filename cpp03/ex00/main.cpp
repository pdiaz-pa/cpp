#include "ClapTrap.hpp"

int main( void ){
    

    ClapTrap pepe("PEPE");
    ClapTrap curro("CURRO");

    pepe.attack(curro.getName());
    curro.takeDamage(2);
    curro.beRepaired(5);
    return (0);
}