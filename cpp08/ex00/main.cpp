#include "easyfind.hpp"

int main ( void ){
    try
    {
        int arr[10] = {-34, 43, 2, -3, 77, 0, 1};
        std::vector<int> test(arr, arr + sizeof(arr) / sizeof(int));
        easyfind(test, 43);
        easyfind(test, 55);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

}