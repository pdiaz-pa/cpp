#include "MateriaSource.hpp"

void MateriaSource::learnMateria(AMateria *materia){
	int i;
	i = 0;

	while (i < this->arraysize){
		if (this->array[i] == NULL){
			this->array[i] = materia;
			std::cout << "MateriaSource learning " << array[i]->getType() << " in slot " << i << std::endl;
			return;
		}
		i++;
	}
	std::cout << "Can't learn more materias, this MateriaSource is full." << std::endl;
	delete materia;
}

AMateria* MateriaSource::createMateria(std::string const & type){
	int i;
	i = 0;

	while (i < arraysize)
	{
		if (array[i] != NULL && array[i]->getType() == type){
			std::cout << "Materia created->" << type << std::endl;
			return (array[i]->clone());
		}
		i++;
	}
	std::cout << "MateriaSource" << " can't create " << type << " materia (not learned)" << std::endl;
	return (NULL);
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	*this = src;
}

MateriaSource::MateriaSource()
{
	int i;
	i = 0;
	std::cout << "MateriaSource created" << std::endl;

	while(i < this->arraysize){
		array[i] = NULL;
		i++;
	}
}

MateriaSource::~MateriaSource()
{
	int i;
	i = 0;
	std::cout << "MateriaSource destroyed" << std::endl;
	while (i < this->arraysize){
		delete this->array[i];
		i++;
	}
}
