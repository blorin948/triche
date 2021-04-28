#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "ICharacter.hpp"
#include <iostream>
#include <string>

class Amateria
{

	public :

	Amateria(std::string const &type);
	Amateria();
	Amateria(Amateria const &c);
	Amateria &operator=(Amateria const &c);
	virtual ~Amateria();
	std::string const & getType() const; //Returns the materia type
	unsigned int getXP() const; //Returns the Materia's XP
	virtual Amateria* clone() const = 0;
	virtual void use(ICharacter& target);


	protected :

	unsigned int _xp;
	std::string _type;

};

#endif