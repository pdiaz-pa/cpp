#include <string>
#include <iostream>

int main ( void ){
	std::string brains = "HI THIS IS BRAIN";
	std::string* puntero = &brains;
	std::string& refe = brains;

	std::cout << &brains << std::endl << puntero << std::endl << &refe << std::endl;
	std::cout << brains << std::endl << *puntero << std::endl << refe << std::endl;

	return (0);
}