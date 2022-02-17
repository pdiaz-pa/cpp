#pragma once

#include "ICharacter.hpp"

class Character : public ICharacter
{
protected:


	AMateria *array[4];
	int arrsize = 4;
	std::string name;
public:
	std::string const & getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
	Character(/* args */);
	~Character();
};


