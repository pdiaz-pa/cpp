#include "ScavTrap.hpp"

int main( void ){
    
    ScavTrap goku("Goku del Betis");
    ClapTrap vegeta("Vegeta");

    vegeta.attack(goku.getName());
    goku.attack(vegeta.getName());
    goku.guardGate();
    
    return (0);
}