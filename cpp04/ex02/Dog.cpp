#include "Dog.hpp"

void Dog::MakeSound() const{
	std::cout << "guau" << std::endl;
}

const std::string Dog::getType( void ) const{
	return (this->type);
}

Dog::Dog(Dog const & src){
	*this = src;
	return;
}

Dog & Dog::operator=(Dog const & rhs){
	this->type = rhs.type;
	return *this;
}

Dog::Dog(/* args */)
{
	std::cout << "Default Dog created." << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
	
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog destroyed." << std::endl;
}