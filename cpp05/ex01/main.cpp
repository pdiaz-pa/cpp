#include "Bureaucrat.hpp"
#include "Form.hpp"
int main(){
    try
    {
        Bureaucrat *pepe = new Bureaucrat("pepe", 10);
    	Form *form = new Form("formulario", 20, 20);
        std::cout << *pepe << std::endl;
    	std::cout << *form << std::endl;
    	form->beSigned(*pepe);
        delete pepe;
        delete form;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "----------------------------------------------------------------" << std::endl;
    try
    {
        Bureaucrat *goku = new Bureaucrat("goku", 30);
    	Form *form = new Form("formulario", 20, 20);
        std::cout << *goku << std::endl;
    	std::cout << *form << std::endl;
    	form->beSigned(*goku);
        delete goku;
        delete form;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "----------------------------------------------------------------" << std::endl;
    try
    {
        Bureaucrat *goku = new Bureaucrat("curro", 30);
    	Form *form = new Form("formulario", 10, 20);
        std::cout << *goku << std::endl;
    	std::cout << *form << std::endl;
    	goku->signForm(*form);
        delete goku;
        delete form;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}