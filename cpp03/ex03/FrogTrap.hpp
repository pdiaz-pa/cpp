#pragma once
#include "ClapTrap.hpp"

class FrogTrap : virtual public ClapTrap
{
private:
    
public:
	FrogTrap & operator=(FrogTrap & rhs);
	FrogTrap(FrogTrap & src);
    void highFiveGuys( void );
    FrogTrap(std::string name);
    FrogTrap();
    ~FrogTrap();
};


