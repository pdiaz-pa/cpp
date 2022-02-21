#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include <iomanip>

static void testSubject(void)
{
	std::cout << "---------SUBJECT-----------" << std::endl;
	std::cout << "#################" << std::endl;
	IMateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* curro = new Character("Curro");
	curro->equip(src->createMateria("ice"));
	curro->equip(src->createMateria("cure"));
	ICharacter* pepe = new Character("pepe");
	curro->use(0, *pepe);
	curro->use(1, *pepe);
	curro->unequip(1);
	curro->use(1, *pepe);
	std::cout << "#################" << std::endl;
	delete pepe;
	delete curro;
	delete src;
}

static void	testCharacter(void)
{
	std::cout << "---------CHARACTER-----------" << std::endl;
	std::cout << "#################" << std::endl;
	Character	*pepito = new Character("Pepito");
	Character	*sara = new Character("Sara");
	Ice *ice = new Ice();
	Cure *cure = new Cure();
	pepito->equip(new Ice());
	pepito->equip(cure);
	pepito->equip(ice);
	pepito->use(0, *sara);
	pepito->use(1, *sara);
	pepito->use(2, *pepito);
	pepito->unequip(0);
	pepito->use(0, *sara);
	std::cout << "#################" << std::endl;
	delete pepito;
	delete sara;
}

static void	testMateriaSource()
{
	std::cout << "---------MATERIA SOURCE-----------" << std::endl;
	std::cout << "#################" << std::endl;
	IMateriaSource	*matSource = new MateriaSource();
	Character		*vegeta = new Character("Vegeta");
	Character		*goku = new Character("Goku");
	
	matSource->learnMateria(new Ice());
	matSource->learnMateria(new Ice());
	matSource->learnMateria(new Ice());
	matSource->learnMateria(new Cure());
	matSource->learnMateria(new Ice());


	vegeta->equip(matSource->createMateria("ice"));
	vegeta->equip(matSource->createMateria("ice"));
	vegeta->equip(matSource->createMateria("ice"));
	vegeta->equip(matSource->createMateria("ice"));
	vegeta->equip(matSource->createMateria("ice"));
	vegeta->use(0, *goku);
	vegeta->unequip(3);
	vegeta->use(3, *goku);
	std::cout << "#################" << std::endl;
	delete matSource;
	delete vegeta;
	delete goku;
}

int	main(void)
{


	testSubject();
	testCharacter();
	testMateriaSource();
	//system("leaks abstract");
	return (0);
}