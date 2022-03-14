#pragma once
#include <string>

class Weapon
{
private:
	std::string _type;
public:

	std::string const & getType() const;
	void setType(std::string weapontype);
	Weapon(std::string type);
	~Weapon();
};
