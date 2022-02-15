#pragma once

#include <string>
#include <iostream>

class ClapTrap
{
private:
    int _hitpoints;
    int _energypoints;
    int _attackdamage;
    std::string _name;
public:
    void    attack(std::string const & target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
    std::string getName( void );
    void setName( std::string name );
	ClapTrap & operator=(ClapTrap const & rhs);
	ClapTrap(ClapTrap const & src);
    ClapTrap(std::string name);
    ~ClapTrap();
};
