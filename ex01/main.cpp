
#include "ClapTrap.hpp"

int main()
{
	ClapTrap clappy("Clappy");
	ClapTrap clappou("Clappou");
	ClapTrap clappon("Clappon");

	for (int i = 0; i <= 10; i++)
		clappy.attack("Clappou");
	for (int i = 0; i <= 10; i++)
		clappou.beRepaired(2);
	for (int i = 0; i <= 10; i++)
		clappon.takeDamage(3);
}