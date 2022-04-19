#pragma once
#include <vector>
#include <iostream>
#include <algorithm>

class span{
    private:
        std::vector<int> intvct;
		unsigned int maxsize;
		unsigned int actualsize;
    public:
        class TooMuchNumbers : public std::exception{
            const char *what() const throw(){
                return ( "Exception: TooMuchNumbers: You are trying to push too many numbers to this vector ");
            }
        };
        class NotEnoughNumbers : public std::exception{
            const char *what() const throw(){
                return ( "Exception: NotEnoughNumbers: Not enough numbers in this vector ");
            }
        };
		void fillTheVector(std::vector<int> extvector);
		void printer(std::ostream & o) const;
		int shortestSpan();
		int longestSpan();
        void addNumber(int value);
		span & operator=(const span & rhs);
		span(const span & src);
        span(unsigned int n);
        span();
        ~span();
};

std::ostream & operator<<(std::ostream & o, const span &src);