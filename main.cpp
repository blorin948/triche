#include "Ice.hpp"
#include <string>
#include <iostream>
#include "Amateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main()
{
/*	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* moi = new Character("moi");
	Amateria* tmp;
	tmp = src->createMateria("ice");
	moi->equip(tmp);
	tmp = src->createMateria("cure");
	moi->equip(tmp);
	ICharacter* bob = new Character("bob");
	moi->use(0, *bob);
	moi->use(1, *bob);
	delete bob;
	delete moi;
	delete src;
	return 0;*/
	IMateriaSource *src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
	IMateriaSource *t = src;
    ICharacter *zaz = new Character("zaz");
    Amateria *tmp;
	Amateria *tmp2;

    tmp = src->createMateria("ice");
    zaz->equip(tmp);
    tmp = t->createMateria("cure");
    zaz->equip(tmp);
    ICharacter* bob = new Character("bob");
	ICharacter* cob = zaz;
	ICharacter* cob2 = new Character("cob2");

    cob->use(0, *bob);
    zaz->use(1, *bob);

    delete bob;
    delete zaz;
    delete src;

    return (0);
}