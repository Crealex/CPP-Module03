
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap clappy("Clappy");
	ClapTrap clappou("Clappou");
	std::cout << "Creating a ScavTrap object..." << std::endl;
	FragTrap fragou("Fragou");


	fragou.displayAttributs();
	clappy.displayAttributs();
	clappou.displayAttributs();
	for (int i = 0; i <= 10; i++)
		clappy.attack("Clappou");
	for (int i = 0; i <= 10; i++)
		clappou.beRepaired(2);
	fragou.highFivesGuys();
	clappy.displayAttributs();
}