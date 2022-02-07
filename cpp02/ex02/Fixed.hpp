#include <iostream>
#include <cmath>
#pragma once

class Fixed{
private:
    int raw;
    static const int bitnum = 8;
public:
    static Fixed & max(Fixed &a, Fixed &b);
    static Fixed & min(Fixed &a, Fixed &b);
    static const Fixed & max(Fixed const &a, Fixed const &b);
    static const Fixed & min(Fixed const &a, Fixed const &b);
    Fixed();
    Fixed(int const integer);
    Fixed(float const floatnum);
    float toFloat( void ) const;
    int toInt( void ) const;
    ~Fixed();
    Fixed(Fixed const & src);
    Fixed & operator+(Fixed const &rhs);
    Fixed & operator-(Fixed const &rhs);
    Fixed & operator*(Fixed const &rhs);
    Fixed & operator/(Fixed const &rhs);
    Fixed & operator=(Fixed const & rhs);
    Fixed & operator++(void);
    Fixed & operator--(void);
    Fixed operator++(int);
    Fixed operator--(int);
    bool operator<(const Fixed &rhs ) const;
    bool operator>(const Fixed &rhs ) const;
    bool operator>=(const Fixed &rhs ) const;
    bool operator<=(const Fixed &rhs ) const;
    bool operator!=(const Fixed &rhs ) const;
    bool operator==(const Fixed &rhs ) const;
    
    int getRawBits( void ) const;
    void setRawBits( int const raw);
};

std::ostream & operator<<( std::ostream & o, Fixed const & fixed);