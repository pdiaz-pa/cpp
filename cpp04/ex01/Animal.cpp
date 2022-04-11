#include "Animal.hpp"

const std::string Animal::getType( void ) const{
	return (this->type);
}

void Animal::MakeSound() const{
	std::cout << "*classic animal sound*" << std::endl;
}

Animal::Animal(Animal const & src){
	*this = src;
	return;
}

Animal & Animal::operator=(Animal const & rhs){
	this->type = rhs.type;
	return *this;
}

Animal::Animal()
{
	std::cout << "Default Animal created." << std::endl;
	type = "unknown animal";
}

Animal::~Animal()
{
	std::cout << "Animal destroyed." << std::endl;
}