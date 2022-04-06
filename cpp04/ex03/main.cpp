#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include <iomanip>

static void testBasic(void)
{
	std::cout << "---------BASIC TEST-----------" << std::endl;
	std::cout << "#################" << std::endl;
	IMateriaSource* MateriaBook = new MateriaSource();

	MateriaBook->learnMateria(new Ice());
	MateriaBook->learnMateria(new Cure());
	ICharacter* curro = new Character("Curro");
	curro->equip(MateriaBook->createMateria("ice"));
	curro->equip(MateriaBook->createMateria("cure"));
	ICharacter* pepe = new Character("pepe");
	curro->use(0, *pepe);
	curro->use(1, *pepe);
	std::cout << "#################" << std::endl;
	delete pepe;
	delete curro;
	delete MateriaBook;
}

static void	testAdvanced()
{
	std::cout << "---------ADVANCED TEST-----------" << std::endl;
	std::cout << "#################" << std::endl;
	IMateriaSource	*materiaBook = new MateriaSource();

	
	materiaBook->learnMateria(new Ice());
	materiaBook->learnMateria(new Ice());
	materiaBook->learnMateria(new Ice());
	materiaBook->learnMateria(new Cure());
	materiaBook->learnMateria(new Ice());

	Character	*vegeta = new Character("Vegeta");
	Character	*goku = new Character("Goku");

	vegeta->equip(materiaBook->createMateria("ice"));
	vegeta->equip(materiaBook->createMateria("cure"));
	vegeta->equip(materiaBook->createMateria("cure"));
	vegeta->equip(materiaBook->createMateria("ice"));
	vegeta->equip(materiaBook->createMateria("ice"));

	vegeta->use(0, *goku);
	vegeta->unequip(3);
	vegeta->use(3, *goku);

	std::cout << "#################" << std::endl;
	delete materiaBook;
	std::cout << "#################" << std::endl;
	delete vegeta;
	std::cout << "#################" << std::endl;
	delete goku;
	std::cout << "#################" << std::endl;

}

int	main(void)
{
	testBasic();
	testAdvanced();
	return (0);
}