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
	void equip(AMateria *materia);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
	
	Character &operator=(const Character &rhs);
	Character(const Character &src);
	Character(const std::string & name);
	Character();
	virtual ~Character();
};


