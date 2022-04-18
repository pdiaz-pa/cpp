#include "whatever.hpp"
#include <iostream>

int main( void ) {
int a = 2;
int b = 3;
swap( a, b );
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min<int>( a, b ) << std::endl; //usando :: antes de la función implementada para evitar la ambigüedad con la función "min" que ya existe
std::cout << "max( a, b ) = " << ::max<int>( a, b ) << std::endl;
std::string c = "hola";
std::string d = "adios";
swap(c, d);
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << ::min<std::string>( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max<std::string>( c, d ) << std::endl;
return 0;
}