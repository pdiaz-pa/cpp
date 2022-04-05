#include "WrongCat.hpp"

void WrongCat::MakeSound() const{
	std::cout << "cuack (=ಠᆽಠ=)" << std::endl;
}

const std::string WrongCat::getType( void ) const{
	return (this->type);
}

WrongCat::WrongCat(WrongCat const & src){
	*this = src;
	return;
}

WrongCat & WrongCat::operator=(WrongCat const & rhs){
	this->type = rhs.type;
	return *this;
}

WrongCat::WrongCat(/* args */)
{
	std::cout << "Default WrongCat created." << std::endl;
	type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destroyed." << std::endl;
}