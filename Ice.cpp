#include "Ice.hpp"

Ice::Ice() : Amateria("ice")
{

}

Ice::Ice(Ice const &c)
{
	*this = c;
}

Ice &Ice::operator=(Ice const &c)
{
	_xp = c._xp;
	return (*this);
}

Ice::~Ice()
{

}

void Ice::use(ICharacter& target)
{
	Amateria::use(target);
	std::cout <<  "* shoots an ice bolt at NOM *" << std::endl;
}

Amateria *Ice::clone() const
{
	return (new Ice);
}