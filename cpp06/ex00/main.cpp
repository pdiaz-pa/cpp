



#include "Data.hpp"
int main ( int argc, char **argv ){
    if (argc != 2){
        std::cout << "Error" << std::endl;
        return (0);
    }
    Data data(argv[1]);
    data.processor();
}