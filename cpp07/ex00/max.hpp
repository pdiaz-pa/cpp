#pragma once
#include <iostream>

template<typename T>
T   const max(const T & x, const T & y){
    if(x >= y)
        return (x);
    else
        return(y);
}