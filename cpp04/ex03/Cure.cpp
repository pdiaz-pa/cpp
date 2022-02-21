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
	std::cout << "Cure Copy constructor called" << std::endl;
	*this = src;
}

Cure	*Cure::clone() const{
	return (new Cure(*this));
}

Cure::Cure(/* args */) : AMateria("cure")
{
	std::cout << "Cure Constructor called" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure Destructor called" << std::endl;
}