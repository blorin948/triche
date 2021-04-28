#include "Character.hpp"

Character::Character(std::string const &n) : _name(n), _count(0)
{
	_inv[0] = NULL;
	_inv[1] = NULL;
	_inv[2] = NULL;
	_inv[3] = NULL;
}

Character::Character(void)
{

}

Character::Character(Character const &c)
{
	*this = c;
}

Character &Character::operator=(Character const &c)
{
	deleteAll();
	int i = 0;
	while (i < c._count)
	{
		_inv[i] = c.getAmateria(1)->clone();
		i++;
	}
	return (*this);
}

Character::~Character()
{
	deleteAll();
}

Amateria *Character::getAmateria(int idx) const
{
	if (idx < _count)
		return (_inv[idx]);
	else
	{
		return (NULL);
	}
	
}

void Character::deleteAll(void)
{
	int i = 0;
	while (i < _count)
	{
		delete _inv[i];
		i++;
	}
	_count = 0;
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(Amateria *m)
{
	if (_count < 4)
	{
		_inv[_count] = m;
		_count++;
	}
	else
		std::cout << "Iventory of " << this->_name << " is full." << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < _count)
	{
		std::cout << "Amateria " << _inv[idx]->getType() << " unequiped." << std::endl;
		_inv[idx] = NULL;
		_count--;
	}
	else
		std::cout << "Couldnt find Amateria number " << idx << " on " << this->_name<<  " inventory." << std::endl;
	
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < _count)
	{
		_inv[idx]->use(target);		
	}
	else
	{
		std::cout << "Couldnt find Amateria number " << idx << " on " << this->_name<<  " inventory." << std::endl;
	}
	
}