#include "ScavTrap.hpp"
#include "FrogTrap.hpp"
#include "DiamondTrap.hpp"

int main( void ){
	DiamondTrap julian("Julian");
    julian.attack("Pepe");
	julian.highFiveGuys();
	julian.guardGate();
	julian.whoAmI();
    return (0);
}