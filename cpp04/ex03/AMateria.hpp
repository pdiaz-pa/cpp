#pragma once
#include <string>

class AMateria
{
protected:
	std::string type;
private:
	/* data */
public:
	AMateria(std::string const & type);
	AMateria();
	~AMateria();
	std::string const & getType() const;

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};


