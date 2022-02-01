#pragma once

class Fixed
{
private:
    int raw;
    static const int bitnum = 8;
public:
    Fixed();
    ~Fixed();
    Fixed(Fixed const & src);
    Fixed & operator=(Fixed const & rhs);
    int getRawBits( void ) const;
    void setRawBits( int const raw);
};