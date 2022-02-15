#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main ( void ){
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();


	std::cout << meta->getType() << std::endl;
	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;

	j->MakeSound();
	i->MakeSound();
	meta->MakeSound();
	return (0);
}