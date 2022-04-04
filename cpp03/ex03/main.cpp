#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main( void ){
	DiamondTrap julian("Julian");
    julian.attack("Pepe");
	julian.highFiveGuys();
	julian.guardGate();
	julian.whoAmI();
    return (0);
}