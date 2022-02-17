#include "Ice.hpp"

void Ice::use(ICharacter& target){
	std::cout << "*shoots an ice bolt at " << target.name << "*" << std::endl;
}

Ice & Ice::operator=(const Ice & ice){
	if (this != &ice)
		this->type = ice.type;

	return *this;
}

Ice::Ice(const Ice & src){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Ice	*Ice::clone() const{
	return (new Ice(*this));
}

Ice::Ice(/* args */)
{
	std::cout << "Constructor called" << std::endl;
	this->type = "ice";
}

Ice::~Ice()
{
	std::cout << "Destructor called" << std::endl;
}