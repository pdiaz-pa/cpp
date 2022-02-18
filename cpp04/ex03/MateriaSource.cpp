#include "MateriaSource.hpp"

void MateriaSource::learnmateria(AMateria *m){
	int i;
	i = 0;

	while (i < this->arrsize){
		if (this->array[i] != NULL){
			this->array[i] = m;
			return;
		}
		i++;
	}
	delete m;
}

AMateria* MateriaSource::createMateria(std::string const & type){

}

MateriaSource::MateriaSource(/* args */)
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
		delete array[i];
		i++;
	}
}
