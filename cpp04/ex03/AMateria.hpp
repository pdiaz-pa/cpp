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
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
	std::string const & getType() const;
	AMateria(std::string const & type);
	AMateria(const AMateria &src);
	AMateria	&operator=(const AMateria &src);
	AMateria();
	virtual ~AMateria();
};


