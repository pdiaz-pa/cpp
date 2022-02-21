#pragma once
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
protected:
	AMateria *array[4];
	static const int arraysize = 4;
public:
	MateriaSource();
	MateriaSource(const MateriaSource &src);
	~MateriaSource();
	void learnMateria(AMateria *m);
	AMateria* createMateria(std::string const & type);
};
