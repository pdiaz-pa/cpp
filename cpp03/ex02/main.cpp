#include "ScavTrap.hpp"
#include "FrogTrap.hpp"

int main( void ){
    

    ScavTrap goku("Goku");
    std::cout << std::endl;
    ScavTrap curro("Curro");
    std::cout << std::endl;
    ClapTrap skippy("Skippy");
    std::cout << std::endl;
    FrogTrap doraemon("Doraemon");
    std::cout << std::endl;

    doraemon.highFiveGuys();
    doraemon.attack("Suneo");
    doraemon.beRepaired(120);
    skippy.attack(curro.getName());
    //goku.attack(curro.getName());
    //skippy.attack(skippy.getName());
    //curro.guardGate();
    
    return (0);
}