#include "Array.hpp"

int main ( void ){
    Array <int>pepe(6);
    
    std::cout << pepe[1] << std::endl;

    Array <std::string>cuerda(3);
    std::cout << cuerda[2] << std::endl;
}