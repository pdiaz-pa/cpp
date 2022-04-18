#pragma once
#include <algorithm>
#include <vector>
#include <iostream>

class ValueNotFound : public std::exception
{
    public:
        virtual const char *what() const throw()
        {
            return ("value not found in that container");
        }
};
template <typename T>
typename T::iterator easyfind(T & cont, int value){
    typename T::iterator it;
    it = std::find(cont.begin(), cont.end(), value);
    if(it != cont.end()){
        std::cout << value << " found in container." << std::endl;

    }
    else{
        throw ValueNotFound();
    }
        return(it);
}
