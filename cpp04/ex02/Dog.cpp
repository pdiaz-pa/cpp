#include "Dog.hpp"

void Dog::MakeSound() const{
	std::cout << "guau" << std::endl;
}

void	Dog::printIdeas()
{
	brain->printSomeIdeas();
}

const std::string Dog::getType( void ) const{
	return (this->type);
}

Dog::Dog(Dog const & src){
	std::cout << "Copy Dog created." << std::endl;
	*this = src;
	this->brain = new Brain(*(src.brain));
	return;
}

Dog & Dog::operator=(Dog const & rhs){
	this->type = rhs.type;
	this->brain = new Brain(*(rhs.brain));
	return *this;
}

Dog::Dog()
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