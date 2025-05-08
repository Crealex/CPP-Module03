
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
	std::cout << "Assigmement Diamou to diamo" << std::endl;
	diamou = diamo;
	std::cout << "new Diamou :" << std::endl;
	diamou.displayAttributs();
	diamo.whoAmI();
}