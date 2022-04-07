#pragma once
#include <string>
#include <iostream>
class Animal
{
protected:
	std::string type;
public:
	virtual void MakeSound() const;
	const std::string getType( void ) const;
	Animal & operator=(Animal const & rhs);
	Animal(std::string name);
	Animal(Animal const & src);
	Animal();
	virtual ~Animal();
};