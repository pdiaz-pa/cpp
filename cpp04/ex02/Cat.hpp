#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain *brain;
protected:

public:
	virtual void MakeSound() const;
	const std::string getType( void ) const;
	Cat & operator=(Cat const & rhs);
	Cat(/* args */);
	Cat(Cat const & src);
	~Cat();
};