#pragma once

#include "ICharacter.hpp"

class Character : public ICharacter
{
protected:
	static const int arrsize = 4;
	AMateria *array[arrsize];
	std::string name;
public:
	std::string const & getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
	Character &operator=(const Character &rhs);

	Character(const Character &src);
	Character(std::string const & name);
	Character();
	virtual ~Character();
};


