#pragma once
#include "AMateria.hpp"

class Cure : public AMateria
{
protected:
	std::string type;
public:
	Cure* clone() const;
	Cure & operator=(const Cure & Cure);
	Cure(/* args */);
	~Cure();
};
