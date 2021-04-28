#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Amateria.hpp"
#include <iostream>
#include <string>

class Character : public ICharacter
{

	public :

	Character(std::string const &n);
	Character();
	Character(Character const &c);
	Character &operator=(Character const &c);
	~Character();
	std::string const & getName() const;
	void equip(Amateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
		Amateria *getAmateria(int idx) const;

	private :

	void deleteAll(void);
	std::string _name;
	Amateria *_inv[4];
	int _count;

};

#endif