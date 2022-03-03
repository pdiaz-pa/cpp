#pragma once

template<typename T>
T   const min(T const & x, T const & y){
    if (x <= y)
        return(x);
    else
        return(y);
}