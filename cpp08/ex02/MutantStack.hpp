#pragma once
#include <iostream>
#include <stack>
#include <deque>
template <class T>
class MutantStack: public std::stack<T>{
    public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;

		iterator begin(){
			return this->c.begin();
		}
		const_iterator begin() const{
			return this->c.begin();
		}
		iterator end(){
			return this->c.end();
		}
		const_iterator end() const{
			return this->c.end();
		}
		MutantStack & operator=(const MutantStack<T> & rhs);
        MutantStack();
        ~MutantStack();
        MutantStack(MutantStack const & src);
        MutantStack(T data);
    private:
};

template<class T>
MutantStack<T> & MutantStack<T>::operator=(const MutantStack & rhs){
	if (*this != rhs){
		this->c = rhs.c;
	}
	return (*this);
}

template<class T>
MutantStack<T>::MutantStack(MutantStack const & src){
	*this = src;
}

template <class T>
MutantStack<T> ::MutantStack(){
    std::cout << "Default Constructor called." << std::endl;
}
template <class T>
MutantStack<T>::~MutantStack(){
    std::cout << "Destructor called." << std::endl;
}