#pragma once
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
protected:
	AMateria *array[4];
public:
	MateriaSource();
	~MateriaSource(/* args */);
	void learnmateria(AMateria*);
	AMateria* createMateria(std::string const type);
};
