#include "Cure.hpp"

void Cure::use(ICharacter& target){
	std::cout << "*heals " << target.getName() << "'s wounds*" << std::endl;
}


Cure & Cure::operator=(const Cure & cure){
	if (this != &cure)
		this->type = cure.type;

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