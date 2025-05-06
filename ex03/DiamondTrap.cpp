
#include "colors.h"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): _name("Default FragTrap"), FragTrap(), ScavTrap()
{
	ClapTrap::_name = _name + "_clap_name";
	_hitPoints = FragTrap::_hitPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << GREEN << "Default DiamondTrap constructor called" << RESET << std::endl;
}



DiamondTrap::DiamondTrap(const DiamondTrap &cpy)
{
	std::cout << BLUE << "Copy constructor DiamondTrap called" << RESET << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << RED << "Destructor DiamondTrap called" << RESET << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs)
{

}

