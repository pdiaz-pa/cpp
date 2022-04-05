#include "Cat.hpp"

void Cat::MakeSound() const{
	std::cout << "miau =^._.^= ∫" << std::endl;
}

const std::string Cat::getType( void ) const{
	return (this->type);
}

Cat::Cat(Cat const & src){
	*this = src;
	return;
}

Cat & Cat::operator=(Cat const & rhs){
	this->type = rhs.type;
	return *this;
}

Cat::Cat(/* args */)
{
	std::cout << "Default Cat created." << std::endl;
	type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat destroyed." << std::endl;
}