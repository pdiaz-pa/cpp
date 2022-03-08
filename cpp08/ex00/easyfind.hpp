#pragma once
#include <algorithm>
#include <vector>
#include <iostream>
template <typename T>
int easyfind(std::vector<T> vct, int value){
    std::vector<int>::iterator it;
    it = std::find(vct.begin(), vct.end(), value);
    if(it != vct.end()){
        std::cout << value << " found in vector." << std::endl;
        return(0);
    }
    else{
        std::cout << value << " is not inside that vector." << std::endl;
        return (-1);
    }

}
