#include "easyfind.hpp"

int main ( void ){
    int arr[10] = {-34, 43, 2, -3, 77, 0, 1};
    std::vector<int> test(arr, arr + sizeof(arr) / sizeof(int));
    easyfind(test, 55);
    easyfind(test, 43);
}