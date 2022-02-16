#pragma once
#include "AMateria.hpp"

class Ice : public AMateria
{
protected:
	std::string type;
public:
	virtual AMateria* clone() const;
	Ice(/* args */);
	~Ice();
};
