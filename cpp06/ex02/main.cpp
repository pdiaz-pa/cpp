#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

Base *generate (){
	srand(time(NULL));
	int dice = std::rand () % 3;
	std::cout << "(object type ";
	if (dice == 0){
		std::cout << "A created.)" << std::endl;
		return (new A);
	}
	else if (dice == 1){
		std::cout << "B created.)" << std::endl;
		return(new B);
	}
	else if (dice == 2){
		std::cout << "C created.)" << std::endl;
		return (new C);
	}
	else{
		std::cout << "Anything created.)" << std::endl;
	}
	return 0;
}

void identify(Base *p){
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "A ";
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "B ";
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "C ";
	return;
}

void identify(Base &p){
	try
	{
		p = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "(No es A)->" << e.what() << std::endl;
	}
	try
	{
		p = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "(No es B)->" << e.what() << std::endl;
	}
	try
	{
		p = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "(No es C)->" << e.what() << std::endl;
	}
}

int main (void){
	Base *base = generate();
	std::cout << "The generated class is " << std::endl;
	identify(*base);
	std::cout << "type." << std::endl << std::endl;

	std::cout << "The generated class is " << std::endl;
	identify(base);
	std::cout << "type." << std::endl;

	Base *erroneo = new Base;
	identify(erroneo);

}