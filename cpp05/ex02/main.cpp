#include "Bureucrat.hpp"
#include "Form.hpp"
int main(){
try
{
    Bureucrat *pepe = new Bureucrat("pepe", 10);
	Form *form = new Form("formulario", 20, 20);
    std::cout << *pepe << std::endl;
	std::cout << *form << std::endl;
	form->beSigned(*pepe);
}
catch(const std::exception& e)
{
    std::cerr << e.what() << '\n';
}
std::cout << "----------------------------------------------------------------" << std::endl;
try
{
    Bureucrat *goku = new Bureucrat("goku", 30);
	Form *form = new Form("formulario", 20, 20);
    std::cout << *goku << std::endl;
	std::cout << *form << std::endl;
	form->beSigned(*goku);
}
catch(const std::exception& e)
{
    std::cerr << e.what() << '\n';
}
std::cout << "----------------------------------------------------------------" << std::endl;
try
{
    Bureucrat *goku = new Bureucrat("curro", 30);
	Form *form = new Form("formulario", 10, 20);
    std::cout << *goku << std::endl;
	std::cout << *form << std::endl;
	goku->signForm(*form);
}
catch(const std::exception& e)
{
    std::cerr << e.what() << '\n';
}
}