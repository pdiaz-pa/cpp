#pragma once
#include <iostream>
#include <stack>
#include <deque>
template <class T, typename Container = std::deque<T> >
class MutantStack: public std::stack<T, Container>{
    public:
        
        MutantStack();
        ~MutantStack();   
        MutantStack(MutantStack const & src);
        MutantStack(T data);
    private:
};

template <class T, typename Container>
MutantStack<T, Container> ::MutantStack(){
    std::cout << "Default Constructor called." << std::endl;
}
template <class T, typename Container>
MutantStack<T, Container>::~MutantStack(){
    std::cout << "Destructor called." << std::endl;
}

/*
    Nuestra clase MutantStack hereda de:
        -Stack
        -deque(el cual contiene un iterador)
*/