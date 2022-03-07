/*
		Array<T>	&operator=(const Array<T> &array)
		{
			if (this != &array)
			{
				if (_size > 0)
					delete [] _data;
				_size = array._size;
				_data = new T[array._size];
				for (unsigned int i = 0; i < _size; i++)
					_data[i] = array._data[i];
			}
			return (*this);
		}

*/

#pragma once
#include <iostream>
template <class T>
class Array
{
private:
	T *elements;
	unsigned int _size;
public:
	class outOfBounds : public std::exception
	{
	public:
        virtual const char *what() const throw()
        {
        	return ("size selected is out of bounds");
        }
	};
	
    T &operator[](unsigned int i) {
       if( i > _size ) {
          std::cout << "Index out of bounds" << std::endl; 
          return elements[0];
       }
       return elements[i];
	   try
	   {
		   if (i > _size){
			   throw outOfBounds();
		   }
		   return elements[i];
	   }
	   catch(const std::exception& e)
	   {
		   std::cerr << e.what() << '\n';
	   }
    }
	
	T &operator=(T const & rhs){
		std::cout << "Assignement operator called" << std::endl;
		this = &rhs;
		return (*this);
	}
	
	unsigned int size() const {
		return (this->_size);
	};
	Array(unsigned int n) : elements(new T[n]), _size(n){
		std::cout << "Constructor with parameter called" << std::endl;
	};
	Array(Array & src){
		*this = src; // Mal. Hay que hacer una copia del objeto con new, para que los cambios de un objeto no afecten a la copia
		std::cout << "Copy constructor called" << std::endl;
		return;
	};
	Array() : _size(0){
		std::cout << "Default constructor called" << std::endl;
	};
	~Array(){
		std::cout << "Destructor called" << std::endl;
		delete [] elements;
	};
};