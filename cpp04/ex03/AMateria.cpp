#include "AMateria.hpp"

AMateria::AMateria(const AMateria & src){
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = src;
}

AMateria::AMateria(){
	this->type = "unknown";
}

std::string const &AMateria::getType() const{
	return(this->type);
}

AMateria & AMateria::operator=(const AMateria & rhs){
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

void 	AMateria::use(ICharacter &target){
	std::cout << "AMateria using in " << target.getName() << std::endl;
}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
}