
#include "ScavTrap.hpp"

int main()
{
	ClapTrap clappy("Clappy");
	ClapTrap clappou("Clappou");
	ClapTrap clappon("Clappon");
	std::cout << "Creating a ScavTrap object..." << std::endl;
	ScavTrap scavimimi("Scavimimi");


	scavimimi.displayAttributs();
	clappy.displayAttributs();
	clappou.displayAttributs();
	clappon.displayAttributs();
	for (int i = 0; i <= 10; i++)
		clappy.attack("Clappou");
	for (int i = 0; i <= 10; i++)
		clappou.beRepaired(2);
	for (int i = 0; i <= 10; i++)
		clappon.takeDamage(3);
	for (int i = 0; i <= 10; i++)
		scavimimi.attack("Clappy");
	scavimimi.guardGate();
	clappy.displayAttributs();
}