#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : _count(0)
{
	_save[0] = NULL;
	_save[1] = NULL;
	_save[2] = NULL;
	_save[3] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &c)
{
	*this = c;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &c)
{
	deleteAll();
	int i = 0;
	while (i < c._count)
	{
		_save[i] = c.getAmateria(i)->clone();
		i++;
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	deleteAll();
}

Amateria *MateriaSource::getAmateria(int idx) const
{
	if (idx < _count)
	{
		return (_save[idx]);
	}
	else
		return (NULL);
	
}

void MateriaSource::deleteAll(void)
{
	int i = 0;
	while (i < _count)
	{
		delete _save[i];
		i++;
	}
	_count = 0;
}

void MateriaSource::learnMateria(Amateria *c)
{
	if (this->_count < 4)
	{
		_save[_count] = c;
		_count++;
	}
}

Amateria *MateriaSource::createMateria(std::string const & type)
{
	int i = 0;
	while (i < this->_count)
	{
		if (_save[i]->getType() == type)
		{
			return (_save[i]->clone());
		}
		i++;
	}
	return (0);
}