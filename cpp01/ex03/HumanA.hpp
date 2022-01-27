#pragma once
#include "Weapon.hpp"

class HumanA
{
private:
	std::string _name;
	Weapon const &_weapon;
public:
	void attack();
	HumanA(std::string name, Weapon const &weapon );
	~HumanA();
};


