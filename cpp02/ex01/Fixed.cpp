#include "Fixed.hpp"

float Fixed::toFloat( void ) const{
    std::cout << "to float: " << (float)this->raw << "/" << (1 << bitnum) << "->";
    float f = (float)this->raw / (1 << bitnum);

    return (f);
}
int Fixed::toInt( void ) const{
    std::cout << "to int: " << (int)(roundf((float)raw)) << "/" << (1 << bitnum) << "->";
    int integer;
    integer = ((int)(roundf((float)raw / (1 << bitnum))));

    return (integer);
}

std::ostream & operator<<( std::ostream & o, Fixed const &fixed){
    o << fixed.toFloat();
    return o;
}

int Fixed::getRawBits( void ) const{
    std::cout << "getRawBits member function called" << std::endl;
    return(this->raw);
}

void Fixed::setRawBits(int const raw){
    std::cout << "setRawBits member function called" << std::endl;
    this->raw = raw;
    return;
}

Fixed::Fixed( void ) : raw(0){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const integer){
    std::cout << "Integer constructor called" << std::endl;
    raw = (integer << bitnum);
    std::cout << integer << std::endl << raw << std::endl;
    return;
}

Fixed::Fixed(float const floatnum){
    
    std::cout << "Float constructor called" << std::endl;
    raw = (int)roundf(floatnum * (1 << bitnum));
    std::cout << floatnum << std::endl << raw << std::endl;
    return;
}

Fixed & Fixed::operator=(Fixed const & rhs ){
    std::cout << "Assignement operator called" << std::endl;
    if (this != &rhs)
        this->raw = rhs.getRawBits();
    return *this;
}

Fixed::Fixed(Fixed const & src){
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}