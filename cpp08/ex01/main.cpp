#include "span.hpp"

int main ( void )
{
	srand(time(NULL));
	std::cout << "-----GESTIÓN DE ERRORES-----" << std::endl;
	std::vector<int> extvector;
	for (int i = 0; i != 20; i++){
		extvector.push_back(rand() % 300);
	}
	span test0(10);
	try
	{
		test0.fillTheVector(extvector);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	span test1(2);
	test1.addNumber(2);
	try
	{
		std::cout << test1.longestSpan() << std::endl;
		std::cout << test1.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-----PRUEBA SIMPLE-----" << std::endl;
	extvector.clear();
	for (int i = 0; i < 7; i++){
		extvector.push_back(rand() % 100);
	}
	span test2(10);
	try
	{
		test2.fillTheVector(extvector);
		std::cout << test2;
		std::cout << test2.shortestSpan() << std::endl;
		std::cout << test2.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-----PRUEBA COMPLEJA-----" << std::endl;
	extvector.clear();
	for (int i = 0; i != 15000; i++){
		extvector.push_back(rand() % 30000);
	}


	
    span test(15000);
	try
	{
		test.fillTheVector(extvector);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		std::cout << test.longestSpan() << std::endl;
		std::cout << test.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}