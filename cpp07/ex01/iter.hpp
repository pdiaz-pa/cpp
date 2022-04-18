#pragma once
#include <iostream>

class Test
{
	private:
		std::string str;
	public:
		Test(void) : str("This is a test") {
			std::cout << "Test constructor called" << std::endl;
		}
		std::string getStr(void) const {
			return str;
		}
};

std::ostream &operator<<(std::ostream &o, Test const &src){
	 o << src.getStr(); 
	 return o;
}

template <typename T>void signer(const T & arg){
	(void)arg;
	std::cout << "implemented by pdiaz-pa" << std::endl;
}

template <typename T>void printer(const T & arg){

	std::cout << "arg:  " << arg << std::endl;
}

template<typename T> void iter(const T * array, int size, void function(const T & arg)){
    int i = 0;

	if (size < 0){
		std::cout << "Error : size tiene que ser positivo" << std::endl;
		return ;
	}
    while (i < size){
        function(array[i]);
        i++;
    }
}