#pragma once
#include "ClapTrap.hpp"

class FrogTrap : public ClapTrap
{
private:
    std::string _name;
public:
    void highFiveGuys( void );
    FrogTrap(std::string name);
    ~FrogTrap();
};


