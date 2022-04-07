#pragma once
#include <string>
class Brain
{
private:
	std::string ideas[100];
public:
	void printSomeIdeas();
	Brain	& operator=(const Brain &brain);
	Brain(const Brain & src);
	Brain();
	~Brain();
};
