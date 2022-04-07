#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main ( void ){
	//Animal animalito; // ahora Animal es abstracta
	srand((unsigned)time(NULL)); 
	std::cout << "-------LEAK TEST------" << std::endl;
	const Animal* prueba = new Dog();
    const Animal* test = new Cat();
	delete prueba;
    delete test;
	std::cout << "---------------------------" << std::endl;
	std::cout << "-------DEEP COPY TEST------" << std::endl;
	std::cout << ".....CATS....." << std::endl;
	Cat pepe;
	Cat juan;
	pepe.printIdeas();
	juan.printIdeas();
	pepe = juan;
	std::cout << std::endl;
	pepe.printIdeas();
	juan.printIdeas();
	std::cout << std::endl;
	std::cout << ".....DOGS....." << std::endl;
	Dog pipo;
	Dog tobi;
	tobi.printIdeas();
	pipo.printIdeas();	
	tobi = pipo;
	std::cout << std::endl;
	tobi.printIdeas();
	pipo.printIdeas();
	std::cout << "-------------------" << std::endl;
	std::cout << ">>>>>>ARRAY TEST<<<<<<" << std::endl;
	Animal *array[10];
	int i;
	i = 0;
	std::cout << "_-_-_-Creating array-_-_-_" << std::endl;
	while (i < 5){
		std::cout << i << " ";
		array[i] = new Dog();
		i++;
	}
	while (i < 10){
		std::cout << i << " ";
		array[i] = new Cat();
		i++;
	}
	std::cout << "-_-_-Created-_-_-_" << std::endl;
	i--;
	std::cout << "-_-_-Deleting array-_-_-_" << std::endl;
	while(i >= 0){
		std::cout << i << " ";
		delete array[i];
		i--;
	}
	std::cout << "-_-_-Deleted-_-_-_" << std::endl;
	return (0);
}