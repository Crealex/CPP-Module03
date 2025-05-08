
#include "colors.h"
#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("Default FragTrap")
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << GREEN << "Default FragTrap constructor called" << RESET << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << CYAN << "Constructor FragTrap with the name " << ITALIC << name << RESET << CYAN << " called" << RESET << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &cpy): ClapTrap(cpy._name)
{
	std::cout << BLUE << "Copy FragTrap constructor called" << RESET << std::endl;
	this->_hitPoints = cpy._hitPoints;
	this->_energyPoints = cpy._energyPoints;
	this->_attackDamage = cpy._attackDamage;
}

FragTrap::~FragTrap()
{
	std::cout << RED << "Destructor FragTrap called" << RESET << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	std::cout << "Assignment operator FragTrap called for " << ITALIC << rhs._name << RESET << std::endl;
	return (*this);
}

void FragTrap::highFivesGuys()
{
	std::cout << ITALIC << LIGHT_GRAY << this->_name << RESET << LIGHT_GRAY << " want make a high five !" << RESET << std::endl;
}

void FragTrap::displayAttributs()
{
	std::cout << "-*-*-*-*-*-*-*-*-*-*-" << std::endl;
	std::cout << "FragTrap" << std::endl;
 	std::cout << BOLD << "Name: " << this->_name << RESET << std::endl;
	std::cout << "Hit points: " << this->_hitPoints << std::endl;
	std::cout << "Energy points: " << this->_energyPoints << std::endl;
	std::cout << "Attack damage: " << this->_attackDamage << std::endl;
	std::cout << "-*-*-*-*-*-*-*-*-*-*-" << std::endl;
}

