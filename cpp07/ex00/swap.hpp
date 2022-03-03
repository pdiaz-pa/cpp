#pragma once

template<typename T>
void    swap(T & x, T & y){
    T z;
    z = y;
    y = x;
    x = z;
}