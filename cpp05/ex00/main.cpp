#include "Bureaucrat.hpp"

int main(){
try
{
    Bureaucrat *pepe = new Bureaucrat("pepe", 0);
    std::cout << *pepe << std::endl;
    delete pepe;
}
catch(const std::exception& e)
{
    std::cerr << e.what() << '\n';
}
std::cout << "----------------------------------------------------------------" << std::endl;
try
{
    Bureaucrat *curro = new Bureaucrat("curro", 200);
    std::cout << *curro << std::endl;
    delete curro;
}
catch(const std::exception& e)
{
    std::cerr << e.what() << '\n';
}
std::cout << "----------------------------------------------------------------" << std::endl;
try
{
    Bureaucrat *goku = new Bureaucrat("goku", 30);
    std::cout << *goku << std::endl;
    goku->moreGrade();
    goku->moreGrade();
    goku->moreGrade();
    goku->moreGrade();
    std::cout << *goku << std::endl;
    delete goku;
}
catch(const std::exception& e)
{
    std::cerr << e.what() << '\n';
}
std::cout << "----------------------------------------------------------------" << std::endl;
try
{
    Bureaucrat *vegeta = new Bureaucrat("vegeta", 1);
    std::cout << *vegeta << std::endl;
    vegeta->moreGrade();
    std::cout << *vegeta << std::endl;
    delete vegeta;
}
catch(const std::exception& e)
{
    std::cerr << e.what() << '\n';
}
std::cout << "----------------------------------------------------------------" << std::endl;
}