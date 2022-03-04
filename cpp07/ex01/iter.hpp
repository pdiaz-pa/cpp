#pragma once
#include <iostream>

template <typename T>void printer(const T & arg){

	std::cout << "arg:  " << arg << std::endl;
}

template<typename T> void iter(const T * array, int size, void function(const T & arg)){
    int i = 0;

	if (size < 0){
		std::cout << "Error : size tiene que ser positivo" << std::endl;
		return ;
	}
    while (i < size ){
        function(array[i]);
        i++;
    }
}