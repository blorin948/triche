#ifndef CURE_HPP
# define CURE_HPP

#include "Amateria.hpp"
#include <iostream>
#include <string>

class Cure : public Amateria
{

	public :

	Cure();
	Cure(Cure const &c);
	Cure &operator=(Cure const &c);
	~Cure();
	Amateria* clone() const;
	void use(ICharacter& target);

	private :

};

#endif