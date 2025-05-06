#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public virtual ClapTrap
{
	private:

	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& cpy);
		~FragTrap();
		FragTrap &operator=(const FragTrap& rhs);
		void highFivesGuys(void);
		void displayAttributs();
};

#endif