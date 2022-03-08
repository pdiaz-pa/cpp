#include "span.hpp"

void span::addNumber(int value){
    std::cout << "addnumber" << value << std::endl;
}

span::span(){
    std::cout << "Default constructor called" << std::endl;
};

span::span(unsigned int n) : intvct(std::vector<unsigned int>(n, 0)){
    std::cout << "Constructor called" << std::endl;
};

span::~span(){
    std::cout << "Destructor called" << std::endl;
};