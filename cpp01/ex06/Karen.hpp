#pragma once
#include <string>
#include <iostream>

class Karen
{
private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
    typedef void (*karenptr[])();
    

public:
    int strtoint(std::string level);
    void complain ( std::string level );
    Karen(/* args */);
    ~Karen();
};
