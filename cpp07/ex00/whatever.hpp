#pragma once

template<typename T>
void    swap(T & x, T & y){
    T z;
    z = y;
    y = x;
    x = z;
}

template<typename T>
T   const min(T const & x, T const & y){
    if (x <= y)
        return(x);
    else
        return(y);
}

template<typename T>
T   const max(const T & x, const T & y){
    if(x >= y)
        return (x);
    else
        return(y);
}