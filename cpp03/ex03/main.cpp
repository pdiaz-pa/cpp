#include "ScavTrap.hpp"
#include "FrogTrap.hpp"

int main( void ){
    

    ScavTrap goku("Goku del Betis");
    ScavTrap curro("El Curro");
    ClapTrap skippy("Skippy");


    FrogTrap doraemon("Doraemon");

    doraemon.highFiveGuys();
    doraemon.attack("jiji");
    doraemon.beRepaired(120);
    //skippy.attack(curro.getName());
    //goku.attack(curro.getName());
    //skippy.attack(skippy.getName());
    //curro.guardGate();
    
    return (0);
}