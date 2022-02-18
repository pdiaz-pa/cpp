#include "Character.hpp"

void Character::use(int idx, ICharacter &target){
	this->array[idx]->use(target);
}

void Character::equip(AMateria *m){
	int i;
	i = 0;

	while (i < this->arrsize){
		if (this->array[i] != NULL){
			this->array[i] == m;
			return;
		}
		i++;
	}
	return;
}

void Character::unequip(int idx){
	if (this->array[idx] != NULL)
		this->array[idx] == NULL;
}

Character &Character::operator=(const Character &rhs){
	int i;
	i = 0;
	if (this != &rhs){
		this->name = rhs.name;
		while (i < this->arrsize){
			if (this->array[i]){
				delete array[i];
			if(rhs.array[i])
				array[i] = rhs.array[i]->clone();
			}
			else
				this->array[i] = NULL;
			i++;
		}
	}
	return(*this);
}

std::string Character::const & getName() const{
	return (this->name);
}

Character::Character(const Character &src){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Character::Character(std::string const & name)
{
	int i;
	i = 0;
	std::cout << "Character created" << std::endl;
	this->name = name;
	while (i < this->arrsize){
		this->array[i] = NULL;
		i++;
	}
}

Character::Character()
{
	int i;
	i = 0;
	std::cout << "Character created" << std::endl;
	this->name = "standard";
	while (i < this->arrsize){
		this->array[i] = NULL;
		i++;
	}
}

Character::~Character()
{
	int i;
	i = 0;
	std::cout << "Character destroyed" << std::endl;
	while(i < this->arrsize){
		if (this->array[i] != NULL)
			delete this->array[i];
		i++;
	}
}