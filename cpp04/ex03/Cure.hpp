#pragma once
#include "AMateria.hpp"

class Cure : public AMateria
{
protected:
	std::string type;
public:
	void use(ICharacter& target);
	Cure* clone() const;
	Cure & operator=(const Cure & Cure);
	Cure(const Cure & src);
	Cure();
	virtual ~Cure();
};
