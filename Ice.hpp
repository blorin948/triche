#ifndef ICE_HPP
# define ICE_HPP

#include "Amateria.hpp"
#include <iostream>
#include <string>

class Ice : public Amateria
{

	public :

	Ice();
	Ice(Ice const &c);
	Ice &operator=(Ice const &c);
	~Ice();
	Amateria* clone() const;
	void use(ICharacter& target);

	private :


};

#endif