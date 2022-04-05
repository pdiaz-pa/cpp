#pragma once
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
protected:

public:
	void MakeSound() const;
	const std::string getType( void ) const;
	WrongCat & operator=(WrongCat const & rhs);
	WrongCat(WrongCat const & src);
	WrongCat();
	~WrongCat();
};