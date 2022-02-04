#include "Fixed.hpp"
#include <iostream>
int main ( void ){
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;

Fixed const c( Fixed( 44.05f ) + Fixed( 9 ) );
Fixed const d( Fixed( 35.05f ) - Fixed( 22.05f ) );
Fixed const e( Fixed( 5.05f ) / Fixed( 2 ) );
std::cout << std::endl;
std::cout << c << std::endl;
std::cout << d << std::endl;
std::cout << e << std::endl;
//std::cout << Fixed::max( a, b ) << std::endl;
return 0;
}
