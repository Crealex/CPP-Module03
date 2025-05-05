
#include "colors.h"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): _name("Default FragTrap")
{
	ClapTrap::_name(_name + "_clap_name");
	this->_hitPoints = FragTrap::_hitPoints;
	std::cout << GREEN << "Default DiamondTrap constructor called" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &cpy)
{
	std::cout << BLUE << "Copy constructor called" << RESET << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << RED << "Destructor called" << RESET << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs)
{

}

