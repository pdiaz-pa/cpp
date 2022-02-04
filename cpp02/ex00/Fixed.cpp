#include "Fixed.hpp"
#include <iostream>

int Fixed::getRawBits( void ) const{
    std::cout << "getRawBits member function called" << std::endl;
    return(this->raw);
}

void Fixed::setRawBits(int const raw){
    std::cout << "setRawBits member function called" << std::endl;
    this->raw = raw;
    return;
}

Fixed::Fixed() : raw(0){
    std::cout << "Default constructor called" << std::endl;
    return;
}

Fixed & Fixed::operator=(Fixed const & fixed ){
    std::cout << "Assignement operator called" << std::endl;
    if (this != &fixed)
        this->raw = fixed.getRawBits();

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