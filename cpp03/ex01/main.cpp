#include "ScavTrap.hpp"

int main( void ){
    
    ScavTrap goku("Goku");
    ClapTrap vegeta("Vegeta");

    vegeta.attack(goku.getName());
    goku.attack(vegeta.getName());
    goku.takeDamage(5);
    goku.guardGate();
    
    return (0);
}