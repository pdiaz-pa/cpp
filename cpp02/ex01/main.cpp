#include "Fixed.hpp"
#include <iostream>
int main ( void ){
    Fixed a; //constructor sin argumentos
    Fixed const b( 10 ); //constructor con int
    Fixed const c( 42.42f ); //constructor con float
    Fixed const d( b ); //constructor copia
    a = Fixed( 1234.4321f ); // operador de sobrecarga de asignacion
    std::cout << "a is " << a << std::endl; // operador de sobrecarga
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;
    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;
    return 0;
}