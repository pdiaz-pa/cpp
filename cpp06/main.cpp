
#include "Data.hpp"
int main ( int argc, char **argv ){
    if (argc != 2){
        std::cout << "Error" << std::endl;
        return (0);
    }
    std::string rawstr(argv[1]);
    Data data;
    data.processor(rawstr);
}