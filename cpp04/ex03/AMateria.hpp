#pragma once
#include <string>
#include <iostream>
#include "ICharacter.hpp"


class ICharacter;

class AMateria
{
protected:
	std::string type;
public:
	AMateria(std::string const & type);
	AMateria(const AMateria &src);
	AMateria	&operator=(const AMateria &src);
	AMateria();
	virtual ~AMateria();
	std::string const & getType() const;

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};


