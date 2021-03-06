#pragma once
#include <string>

class Zombie{
private:
    std::string _name;
public:
    void announce( void );
    void getName( void );
    void setName (std::string name);
    Zombie( void );
    ~Zombie ( void );
};

void randomChump( std::string name );
Zombie* newZombie( std::string name );
