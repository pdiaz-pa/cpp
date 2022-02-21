#include "Character.hpp"

void Character::use(int idx, ICharacter &target){
	if (idx >= 0 && idx < arrsize && array[idx])
	{
		array[idx]->use(target);
		return ;
	}
	std::cout << "do nothing" << std::endl;
}

void Character::equip(AMateria *m){
	int i;
	i = 0;
	while (i < this->arrsize){
		if (this->array[i] == NULL){
			
			this->array[i] = m;
			std::cout << this->name << " equiped " << m->getType() << " in slot " << i << std::endl;
			return;
		}
		i++;
	}
	delete m;
}

void Character::unequip(int idx){
	if ( idx >= 0 && idx < this->arrsize && this->array[idx] != NULL){
		std::cout << this->name << " unequipped " << array[idx]->getType() << " from slot " << idx << std::endl;
		this->array[idx] = NULL;
		return ;
	}
	std::cout << "You can't unequipped an empty slot." << std::endl;
}

Character &Character::operator=(const Character &rhs){
	int i;
	i = 0;
	if (this != &rhs){
		this->name = rhs.name;
		while (i < this->arrsize){
			if (this->array[i]){
				delete this->array[i];
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

const std::string &Character::getName() const{
	return (this->name);
}

Character::Character(const Character &src){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Character::Character(const std::string & name)
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