#pragma once
#include "Animal.hpp"

class Cat : public Animal
{
protected:

public:
	virtual void MakeSound() const;
	const std::string getType( void ) const;
	Cat & operator=(Cat const & rhs);
	Cat(Cat const & src);
	Cat();
	~Cat();
};