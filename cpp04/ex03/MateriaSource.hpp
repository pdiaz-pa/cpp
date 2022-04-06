#pragma once
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
protected:
	static const int arraysize = 4;
	AMateria *array[arraysize];	
public:
	void learnMateria(AMateria *m);
	AMateria* createMateria(std::string const & type);
	MateriaSource(const MateriaSource &src);
	MateriaSource();
	~MateriaSource();
};
