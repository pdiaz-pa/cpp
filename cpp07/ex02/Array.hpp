#pragma once
#include <iostream>
template <class T>
class Array
{
private:
	T *elements;
	unsigned int _size;
public:
    T &operator[](unsigned int i) {
	
       if( i > _size ) {
          std::cout << "Index out of bounds" << std::endl; 
          return elements[0];
       }
       return elements[i];
    }
	T &operator=(T const & rhs){
	std::cout << "Assignement operator called" << std::endl;
    if (this != &rhs)
        this->elements = rhs.elements;

	}
	unsigned int size() const {
		return (this->_size);
	};
	Array(unsigned int n) : elements(new T[n]), _size(n){
		std::cout << "Constructor with parameter called" << std::endl;
	};
	Array(Array & src){
		*this = src;
		std::cout << "Copy constructor called" << std::endl;
		return (this);
	};
	Array() : _size(0){
		std::cout << "Default constructor called" << std::endl;
	};
	~Array(){
		delete [] elements;
	};
};