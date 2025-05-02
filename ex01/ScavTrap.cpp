
#include "colors.h"
#include "ScavTrap.hpp"
#include "iostream"

ScavTrap::ScavTrap()
{
	std::cout << GREEN << "Default ScavTrap constructor called" << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &cpy)
{
	std::cout << BLUE << "Copy constructor called" << RESET << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << RED << "Destructor ScavTrap called" << RESET << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs)
{

}

