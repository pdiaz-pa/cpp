#pragma once
#include "AMateria.hpp"

class Ice : public AMateria
{
protected:
	std::string type;
public:
	void use(ICharacter& target);
	Ice* clone() const;
	Ice & operator=(const Ice & ice);
	Ice(const Ice & src);
	Ice();
	virtual ~Ice();
};
