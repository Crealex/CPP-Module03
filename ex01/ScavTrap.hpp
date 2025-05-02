
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	private:

	public:
		ScavTrap();
		ScavTrap(const ScavTrap& cpy);
		~ScavTrap();
		ScavTrap &operator=(const ScavTrap& rhs);
};
