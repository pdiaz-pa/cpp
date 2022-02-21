#include "Ice.hpp"

void Ice::use(ICharacter& target){
	std::cout << "*shoots an ice bolt at " << target.getName() << "*" << std::endl;
}

Ice & Ice::operator=(const Ice & ice){
	if (this != &ice)
		this->type = ice.type;

	return *this;
}

Ice::Ice(const Ice & src): AMateria("ice"){
	std::cout << "Ice Copy constructor called." << std::endl;
	*this = src;
}

Ice	*Ice::clone() const{
	return (new Ice(*this));
}

Ice::Ice() : AMateria("ice"){
	std::cout << "Ice Constructor called" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice Destructor called" << std::endl;
}