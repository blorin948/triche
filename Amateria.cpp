#include "Amateria.hpp"

Amateria::Amateria(std::string const &type) : _type(type)
{

}

Amateria::Amateria(void)
{

}

Amateria::Amateria(Amateria const &c)
{
	*this = c;
}

Amateria &Amateria::operator=(Amateria const &c)
{
	_xp = c._xp;
	return (*this);
}

Amateria::~Amateria()
{

}

unsigned int Amateria::getXP() const
{
	return (_xp);
}

std::string const &Amateria::getType() const
{
	return(_type);
}

void Amateria::use(ICharacter& target)
{
	_xp += 10;
}