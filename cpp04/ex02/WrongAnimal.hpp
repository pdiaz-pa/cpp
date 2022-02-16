#pragma once
#include <string>
#include <iostream>
class WrongAnimal
{
protected:
	std::string type;
public:
	void MakeSound() const;
	const std::string getType( void ) const;
	WrongAnimal & operator=(WrongAnimal const & rhs);
	WrongAnimal(/* args */);
	WrongAnimal(WrongAnimal const & src);
	~WrongAnimal();
};