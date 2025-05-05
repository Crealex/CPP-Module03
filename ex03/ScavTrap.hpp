
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	private:

	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& cpy);
		~ScavTrap();
		ScavTrap &operator=(const ScavTrap& rhs);
		void attack(const std::string& target);
		void guardGate();
		void displayAttributs();
};

#endif