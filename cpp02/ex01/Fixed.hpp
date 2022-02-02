#include <iostream>
#include <cmath>
#pragma once

class Fixed
{
private:
    int raw;
    static const int bitnum = 8;
public:
    Fixed();
    Fixed(int const integer);
    Fixed(float const floatnum);
    float toFloat( void ) const;
    int toInt( void ) const;
    ~Fixed();
    Fixed(Fixed const & src);
    Fixed & operator=(Fixed const & rhs);
    int getRawBits( void ) const;
    void setRawBits( int const raw);
};

std::ostream & operator<<( std::ostream & o, Fixed const & fixed);