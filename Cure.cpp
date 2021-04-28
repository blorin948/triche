#include "Cure.hpp"


Cure::Cure() : Amateria("cure")
{

}

Cure::Cure(Cure const &c)
{
	*this = c;
}

Cure &Cure::operator=(Cure const &c)
{
	_xp = c._xp;
	return (*this);
}

Cure::~Cure()
{

}

Amateria* Cure::clone() const
{
	return (new Cure);
}

void Cure::use(ICharacter& target)
{
	Amateria::use(target);
	std::cout << "* heals NOM’s wounds *" << std::endl;
}