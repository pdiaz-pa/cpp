#include "ScavTrap.hpp"

int main( void ){
    

    ScavTrap goku("Goku del Betis");
    ScavTrap curro("El Curro");
    ClapTrap skippy("Skippy");

    skippy.attack(curro.getName());
    goku.attack(curro.getName());
    skippy.attack(skippy.getName());
    curro.guardGate();
    
    return (0);
}