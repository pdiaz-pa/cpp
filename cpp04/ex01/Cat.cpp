#include "Cat.hpp"

void	Cat::printIdeas()
{
	brain->printSomeIdeas();
}

void Cat::MakeSound() const{
	std::cout << "meow" << std::endl;
}

const std::string Cat::getType( void ) const{
	return (this->type);
}

Cat::Cat(Cat const & src){
	std::cout << "Copy Cat created." << std::endl;
	*this = src;
	this->brain = new Brain(*(src.brain));
	return;
}

Cat & Cat::operator=(Cat const & rhs){
	
	this->type = rhs.type;
	this->brain = new Brain(*(rhs.brain));
	return *this;
}

Cat::Cat()
{
	std::cout << "Default Cat created." << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat destroyed." << std::endl;
}