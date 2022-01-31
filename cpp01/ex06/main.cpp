#include "Karen.hpp"



int main (int argc, char *argv[]){
    Karen karen;
    std::string level;

    if (argc != 2){
        std::cout << "Numero de argumentos erróneo" << std::endl;
        return(-1);
    }
    level = argv[1];
    int strint = karen.strtoint(level);
    switch(strint)    {
        case 0:
            karen.complain(level);
            break;
        case 1:
            karen.complain(level);
            break;
        case 2:
            karen.complain(level);
            break;
        case 3:
            karen.complain(level);
            break;
        case -1:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
    return (0);
}