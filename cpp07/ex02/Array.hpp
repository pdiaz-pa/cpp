
#pragma once
#include <iostream>
template <class T>
class Array
{
private:
	T *elements;
	unsigned int _size;
public:
	/*
	///////////////
	EXCEPTIONS
	////////////////
	*/
	class OutOfBounds : public std::exception
	{
	public:
        virtual const char *what() const throw()
        {
        	return ("size selected is out of bounds!!!!");
        }
	};
	/*
	///////////////
	OVERLOADS
	////////////////
	*/
    T &operator[](unsigned int i) {
		if (i < 0 || i >= _size)
			throw OutOfBounds();
		return (elements[i]);
    }
	
	Array<T> &operator=(const Array<T> & rhs){
		std::cout << "Assignement operator called" << std::endl;
		if (this->_size > 0)
			delete [] this->elements;
		this->_size = rhs.size();
		std::cout << _size << "tamaño" << std::endl;
		this->elements = new T(_size);
		for (unsigned int i = 0; i < _size; i++)
		{
			this->elements[i] = rhs.elements[i];
		}
		return (*this);
	}
	/*
	///////////////
	FUNCTIONS
	////////////////
	*/
	unsigned int size() const {
		return (this->_size);
	};
	/*
	///////////////
	CONSTRUCTORS 
	////////////////
	*/
	Array(unsigned int n) : elements(new T[n]), _size(n){
		std::cout << "Constructor with parameter called" << std::endl;
	};
	Array(const Array<T> & src) : _size(0){
		std::cout << "Copy constructor called" << std::endl;	
		*this = src;
	};
	Array() : _size(0){
		std::cout << "Default constructor called" << std::endl;
	};
	~Array(){
		std::cout << "Destructor called" << std::endl;
		delete [] elements;
	};
};

template <typename T> std::ostream  & operator<<(std::ostream &o, const Array<T> &src){
	unsigned int	max = 5;

	o << "[" << src.size() << "] ";
	for (unsigned int i = 0; i < src.size() && i < max; i++)
		o << src[i] << " ";
	if (max < src.size())
		o << "...";
	o << std::endl;
	return (o);
}