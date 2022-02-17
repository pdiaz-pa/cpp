#include "Cure.hpp"

Cure & Cure::operator=(const Cure & Cure){
	if (this != &Cure)
		this->type = Cure.type;

	return *this;
}

Cure::Cure(const Cure & src){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Cure	*Cure::clone() const{
	return (new Cure(*this));
}

Cure::Cure(/* args */)
{
	std::cout << "Constructor called" << std::endl;
	this->type = "cure";
}

Cure::~Cure()
{
	std::cout << "Destructor called" << std::endl;
}