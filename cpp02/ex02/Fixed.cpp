#include "Fixed.hpp"

float Fixed::toFloat( void ) const{
    //std::cout << "to float: " << (float)this->raw << "/" << (1 << bitnum) << "->";
    float f;
    f = (float)this->raw / (1 << bitnum);

    return (f);
}

int Fixed::toInt( void ) const{
    //std::cout << "to int: " << (int)(roundf((float)raw)) << "/" << (1 << bitnum) << "->";
    int integer;
    integer = ((int)(roundf((float)raw / (1 << bitnum))));

    return (integer);
}
// ********* OUT ************************************************************************
std::ostream & operator<<( std::ostream & o, Fixed const &fixed){
    //std::cout << fixed.getRawBits() << std::endl;
    o << fixed.toFloat();
    //std::cout << fixed.toFloat() << std::endl;
    return o;
}
// ********* ASIGNACION ************************************************************************
Fixed & Fixed::operator=(Fixed const & rhs ){
    //std::cout << this->raw << "  " << rhs.getRawBits() << std::endl;
    //std::cout << "Assignement operator called" << std::endl;
    if (this != &rhs)
        this->raw = rhs.getRawBits();

    return *this;
}
// ********* SUMA RESTA MULTIPLICACION Y DIVISION ************************************************************************
Fixed  & Fixed::operator+(Fixed const & rhs ){
    //std::cout << "Plus operator called" << std::endl;
    if (this != &rhs)
        this->raw = this->raw + rhs.getRawBits();

    return *this;
}

Fixed & Fixed::operator-(Fixed const & rhs ){
    //std::cout << "Minus operator called" << std::endl;
    if (this != &rhs)
        this->raw = this->raw - rhs.getRawBits();

    return *this;
}
//(Fixed(this->toFloat() * fixed.toFloat()));
Fixed & Fixed::operator*(Fixed const & rhs ){
    //std::cout << "Multiplication operator called" << std::endl;
    //std::cout << this->raw << " multiplicacion " << rhs.getRawBits() << std::endl;
    if (this != &rhs)
        this->raw = this->raw * rhs.toFloat();
    return *this;
}

Fixed & Fixed::operator/(Fixed const & rhs ){
    //std::cout << "Division operator called" << std::endl;
    if (this != &rhs)
        this->raw = this->raw / rhs.toFloat();
    return *this;
}

// ********* ++  -- ************************************************************************

Fixed & Fixed::operator++(void)
{
    //std::cout << "PrePlusplus operator called" << std::endl;
    this->raw++;
    return (*this);
}

Fixed & Fixed::operator--(void)
{
    //std::cout << "PreMinusminus operator called" << std::endl;
    this->raw--;
    return (*this);
}

Fixed Fixed::operator--(int){
    //std::cout << "PostMinusminus operator called" << std::endl;
    Fixed old = *this;
    operator--();
    return old;
}

Fixed Fixed::operator++(int){
    //std::cout << "PostPlusplus operator called" << std::endl;
    Fixed old = *this;
    operator++();
    return old;
}
// ********* MAYOR/MENOR O IGUAL QUE / MAYOR QUE / MENOR QUE / DISTINTO *****************
bool Fixed::operator>( Fixed &lhs, Fixed &rhs){
        return()
}
bool Fixed::operator<( void ){
    
}
bool Fixed::operator>=( void ){
    
}
bool Fixed::operator<=( void ){
    
}
bool Fixed::operator==( void ){
    
}
bool Fixed::operator!=( void ){
    
}
// *********SETTERS Y GETTERS************************************************************

int Fixed::getRawBits( void ) const{
    //std::cout << "getRawBits member function called" << std::endl;
    return(this->raw);
}

void Fixed::setRawBits(int const raw){
    //std::cout << "setRawBits member function called" << std::endl;
    this->raw = raw;
    return;
}

// *********CONSTRUCTORES************************************************************

Fixed::Fixed( void ) : raw(0){
    //std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const integer){
    //std::cout << "Integer constructor called" << std::endl;
    raw = integer * (1 << bitnum);
    //std::cout << "raw int" << raw << std::endl;
    return;
}

Fixed::Fixed(float const floatnum){
    
    //std::cout << "Float constructor called" << std::endl;
    raw = (int)roundf(floatnum * (1 << bitnum));
    //std::cout << "raw floatnum" << raw << std::endl;
    return;
}

Fixed::Fixed(Fixed const & src){
    //std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

Fixed::~Fixed(){
    //std::cout << "Destructor called" << std::endl;
}

/*Fixed & max(Fixed & a, Fixed & b){

}*/