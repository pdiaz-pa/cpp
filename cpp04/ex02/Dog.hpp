#pragma once
#include "Animal.hpp"
#include "Brain.hpp"
class Dog : public Animal
{
private:
	Brain *brain;
protected:

public:
	virtual void MakeSound() const;
	const std::string getType( void ) const;
	Dog & operator=(Dog const & rhs);
	Dog(/* args */);
	Dog(Dog const & src);
	~Dog();
};