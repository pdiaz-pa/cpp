#pragma once 
#include "AMateria.hpp"

class IMateriaSource
{
public:
	virtual ~IMateriaSource(/* args */){}
	virtual void learnmateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const type) = 0;
};


