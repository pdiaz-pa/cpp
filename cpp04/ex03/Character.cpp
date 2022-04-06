#include "Character.hpp"

void Character::use(int idx, ICharacter &target){
	if (idx >= 0 && idx < arrsize && array[idx])
	{
		array[idx]->use(target);
		return ;
	}
	std::cout << this->name << " does nothing..." << std::endl;
}

void Character::equip(AMateria *materia){
	int i;
	i = 0;
	while (i < this->arrsize){
		if (this->array[i] == NULL && materia != NULL){
			this->array[i] = materia;
			std::cout << this->name << " equiped " << materia->getType() << " in slot " << i << std::endl;
			return;
		}
		i++;
	}
	if (materia != NULL){
		std::cout << this->name << " can't equip " << materia->getType() << " because the inventory is full." << std::endl;
		delete materia;
	}
	else{
		std::cout << this->name << " cannot equip this Materia, it is not learned by the MateriaSource!!!" << std::endl;
	}

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
			if (rhs.array[i])
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
	int i;
	i = 0;
		this->name = src.name;
		while (i < this->arrsize){
			if (src.array[i])
				array[i] = src.array[i]->clone();
			
			else
				this->array[i] = NULL;
			i++;
		}
}

Character::Character(const std::string & name)
{
	int i;
	i = 0;
	this->name = name;
	std::cout << "Character created->" << this->name << std::endl;
	while (i < this->arrsize){
		this->array[i] = NULL;
		i++;
	}
}

Character::Character()
{
	int i;
	i = 0;
	std::cout << "Standard Character created" << std::endl;
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
	std::cout << "Character destroyed->" << this->name << std::endl;
	while(i < this->arrsize){
		if (this->array[i] != NULL)
			delete this->array[i];
		i++;
	}
}