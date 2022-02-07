#include "Fixed.hpp"
#include <iostream>
int main ( void ){

Fixed y(5.01f);
Fixed  z(0.56f);

std::cout << "pre antes de operar a: " << y << " b: " << z << std::endl;
y = z++;
std::cout << "pre despues de operar a: " << y << " b: " << z << std::endl;

std::cout << "post antes de operar a: " << y << " b: " << z << std::endl;
y = ++z;
std::cout << "post despues de operar a: " << y << " b: " << z << std::endl << std::endl;

Fixed x(3);
Fixed w(4.08f);

std::cout << "pre antes de operar x: " << x << " w: " << w << std::endl;
x = w--;
std::cout << "pre despues de operar x: " << x << " w: " << w << std::endl;

std::cout << "post antes de operar x: " << x << " w: " << w << std::endl;
x = --w;
std::cout << "post despues de operar x: " << x << " w: " << w << std::endl << std::endl;


Fixed equal(4);
Fixed equ(4);

if (equal == equ)
    std::cout << equal << " Doble igual funciona" << std::endl;

if (equal != x)
    std::cout << equal << " Distinto de funciona" << std::endl;

if(equal < 8)
    std::cout << equal << " Menor que funciona" << std::endl;

if (equal > 1)
        std::cout << equal << " Mayor que funciona" << std::endl;

if(equal <= 4)
    std::cout << equal << " Menor o igual que funciona" << std::endl;

if (equal >= 4)
        std::cout << equal << " Mayor o igual que funciona" << std::endl;

Fixed masmenos(0);

masmenos = equal + equ;
std::cout << masmenos << " suma " << std::endl;
Fixed resta(Fixed(8) - Fixed(5));
std::cout << resta << " resta " << std::endl;
masmenos = resta;
std::cout << resta << " igual " << std::endl;
Fixed multi(Fixed(4.98f) * Fixed(3.2f));
std::cout << multi << " multiplicacion " << std::endl;
Fixed division(Fixed(21) / Fixed(7.01f));
std::cout << division << " division " << std::endl << std::endl;

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
std::cout << Fixed::max( a, b ) << std::endl;
std::cout << Fixed::min( a, b ) << std::endl;
return 0;
}
