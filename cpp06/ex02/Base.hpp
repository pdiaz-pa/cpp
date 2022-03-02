#pragma once
#include <iostream>

class Base
{
	public:
		virtual ~Base();
};

Base::~Base()
{
	std::cout << "Base Destructor called" << std::endl;
}
