#include "iter.hpp"
#include <iostream>

int main ( void ){
    
    unsigned int array[] = {1, 2, 3};
    ::iter<unsigned int>(array, 4 , strcmp("pepe", "jaja"));
    
    return (0);
}