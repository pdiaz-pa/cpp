#pragma once
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
    
public:
    void    highFiveGuys( void );
    void    attack(std::string const & target);
	FragTrap & operator=(FragTrap & rhs);
	FragTrap(FragTrap & src);
    FragTrap(std::string name);
    FragTrap();
    ~FragTrap();
};