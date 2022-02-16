#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main ( void ){

	Animal *array[10];
	//Animal pepe; //no se puede instanciar
	int i;
	i = 0;

	while (i < 5){
		array[i] = new Dog();
		i++;
	}
	while (i < 10){
		array[i] = new Cat();
		i++;
	}
	std::cout << "array creado." << std::endl;
	i--;
	while(i > 0){
		delete array[i];
		i--;
	}

	system("leaks abstract");
	return (0);
}