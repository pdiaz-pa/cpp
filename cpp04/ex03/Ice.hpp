#pragma once
#include "AMateria.hpp"

class Ice : public AMateria
{
protected:
	std::string type;
public:
	virtual void use(ICharacter& target);
	Ice* clone() const;
	Ice & operator=(const Ice & ice);
	Ice(/* args */);
	~Ice();
};
