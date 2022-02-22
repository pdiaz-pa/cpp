#include "Bureucrat.hpp"

int main(){
try
{
    Bureucrat *pepe = new Bureucrat("pepe", 0);
    std::cout << *pepe << std::endl;
}
catch(const std::exception& e)
{
    std::cerr << e.what() << '\n';
}
std::cout << "----------------------------------------------------------------" << std::endl;
try
{
    Bureucrat *curro = new Bureucrat("curro", 200);
    std::cout << *curro << std::endl;
}
catch(const std::exception& e)
{
    std::cerr << e.what() << '\n';
}
std::cout << "----------------------------------------------------------------" << std::endl;
try
{
    Bureucrat *goku = new Bureucrat("goku", 30);
    std::cout << *goku << std::endl;
    goku->moreGrade();
    std::cout << *goku << std::endl;
}
catch(const std::exception& e)
{
    std::cerr << e.what() << '\n';
}
std::cout << "----------------------------------------------------------------" << std::endl;
try
{
    Bureucrat *vegeta = new Bureucrat("vegeta", 1);
    std::cout << *vegeta << std::endl;
    vegeta->moreGrade();
    std::cout << *vegeta << std::endl;
}
catch(const std::exception& e)
{
    std::cerr << e.what() << '\n';
}
std::cout << "----------------------------------------------------------------" << std::endl;
}