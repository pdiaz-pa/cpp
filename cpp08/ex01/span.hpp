#pragma once
#include <vector>
#include <iostream>
class span{
    private:
        std::vector<unsigned int> intvct;
    public:
        class TooMuchNumbers : public std::exception{
            const char *what() const throw(){
                return ( "Exception: There are many numbers in this vector ");
            }
        };
        void addNumber(int value);
        span(unsigned int n);
        span();
        ~span();
};