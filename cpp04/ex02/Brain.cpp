#include "Brain.hpp"
#include <iostream>

std::string gen_random() {
    std::string alphanum =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::string tmp_s;
    

    for (int i = 0; i < 5; ++i) {
        tmp_s += alphanum[rand() % (sizeof(alphanum) - 1)];
    }
    
    return tmp_s;
}

void Brain::printSomeIdeas(){
	std::cout << ideas[0] << ", " << ideas[1] << ", " << ideas[2] << "..." << std::endl;
}

Brain	&Brain::operator=(const Brain &brain)
{
	if (this != &brain)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = brain.ideas[i];
	}
	return (*this);
}

Brain::Brain (const Brain & src)
{
	std::cout << "Copy Brain Constructor called" << std::endl;
	*this = src;
}


Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		ideas[i] = gen_random();
	std::cout << "Brain created." << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destroyed." << std::endl;
}