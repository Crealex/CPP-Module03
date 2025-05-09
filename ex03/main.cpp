
#include "DiamondTrap.hpp"

int main()
{
	std::cout << "Creating a DiamondTrap object..." << std::endl;
	DiamondTrap diamou("Diamou");
	DiamondTrap diamo("Diamo");

	diamou.displayAttributs();
	diamo.displayAttributs();
	diamo.attack("Molon");
	diamo.displayAttributs();
	std::cout << "Assigmement Diamo to diamou" << std::endl;
	diamou = diamo;
	diamou.takeDamage(10);
	diamou.displayAttributs();
	diamou.beRepaired(10);
	diamou.displayAttributs();
	std::cout << "new Diamou :" << std::endl;
	diamou.displayAttributs();
	diamo.whoAmI();
}