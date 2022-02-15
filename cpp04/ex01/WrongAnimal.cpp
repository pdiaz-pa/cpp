#include "WrongAnimal.hpp"

const std::string WrongAnimal::getType( void ) const{
	return (this->type);
}

void WrongAnimal::MakeSound() const{
	std::cout << "*Strange WrongAnimal sound*" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src){
	*this = src;
	return;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs){
	this->type = rhs.type;
	return *this;
}

WrongAnimal::WrongAnimal(/* args */)
{
	std::cout << "Default WrongAnimal created." << std::endl;
	type = "unknown WrongAnimal";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destroyed." << std::endl;
}