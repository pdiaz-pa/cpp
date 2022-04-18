#include "iter.hpp"
#include <iostream>




int main ( void ){
    
    unsigned int intarray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    ::iter<unsigned int>(intarray, 4 , printer);
    

	std::string strarray[] = {"hola", "como", "estas", "bien", "adios", "y tal"};
	::iter<std::string>(strarray, 3, signer);

	float floatarray[] = {1.3f, 2.2f, 3.9f, 4.13f, 5.44f, 6.66f, 7.45f, 8.12f, 9.44f};
    ::iter<float>(floatarray, 9 , printer);

    Test testing[6];
    ::iter<Test>(testing, 5, printer);
    return (0);
}