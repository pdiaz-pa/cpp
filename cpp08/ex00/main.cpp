#include "easyfind.hpp"

int main ( void ){
    try
    {
        std::cout << "-----VECTOR TESTS-----" << std::endl;
        int arr[10] = {-34, 43, 2, -3, 77, 0, 1, 22, 25, 56};
        std::vector<int> test(arr, arr + sizeof(arr) / sizeof(int));
        easyfind(test, 43);
        easyfind(test, 55);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << "-----DEQUE TESTS-----" << std::endl;
        int arr[7] = {-9, 99, 789, 4, 7, 2, 1};
        std::deque<int> test(arr, arr + sizeof(arr) / sizeof(int));
        easyfind(test, 1);
        easyfind(test, 42);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << "-----LIST TESTS-----" << std::endl;
        int arr[12] = {5, 212, 4444, 13, 9, 8, 100, 88, 55, 34, 45, 66};
        std::list<int> test(arr, arr + sizeof(arr) / sizeof(int));
        easyfind(test, 100);
        easyfind(test, 420);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}