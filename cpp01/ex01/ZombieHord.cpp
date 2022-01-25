#include "Zombie.hpp"

Zombie* zombieHord( int N, std::string name ){
    Zombie *zombiearr = new Zombie[N];
    int i;
    i = 0;

    while (i < N){
        zombiearr[i].setName(name);
        zombiearr[i].announce();
        i++;
    }
    return(zombiearr);
}