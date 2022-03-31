#pragma once
#include "ClapTrap.hpp"

class FrogTrap : public ClapTrap
{
private:

public:
	FrogTrap & operator=(FrogTrap & rhs);
	FrogTrap(FrogTrap & src);
	FrogTrap();
    void highFiveGuys( void );
    FrogTrap(std::string name);
    ~FrogTrap();
};


