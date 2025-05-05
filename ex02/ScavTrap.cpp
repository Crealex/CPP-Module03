
#include "colors.h"
#include "ScavTrap.hpp"
#include "iostream"

ScavTrap::ScavTrap()
{
	std::cout << GREEN << "Default ScavTrap constructor called" << RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << CYAN << "Constructor ScavTrap with the name " << ITALIC << name << RESET << CYAN << " called" << RESET << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &cpy): ClapTrap(cpy._name)
{
	std::cout << BLUE << "Copy constructor called" << RESET << std::endl;
	this->_hitPoints = cpy._hitPoints;
	this->_energyPoints = cpy._energyPoints;
	this->_attackDamage = cpy._attackDamage;
}

ScavTrap::~ScavTrap()
{
	std::cout << RED << "Destructor ScavTrap called" << RESET << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs)
{
	std::cout << "Assignment operator ScavTrap called for " << ITALIC << rhs._name << RESET << std::endl;
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return (*this);
}

void ScavTrap::attack(const std::string &target)
{
	if (this->_energyPoints <= 0)
	{
		std::cout << YELLOW << BOLD << "Not enough energy remaining !" << RESET << std::endl;
		return ;
	}
	this->_energyPoints--;
	std::cout << LIGHT_RED << BOLD << target << " take " << this->_attackDamage << " damage points from " << ITALIC << this->_name << RESET << "(ScavTrap)" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << LIGHT_MAGENTA << ITALIC << this->_name << RESET << LIGHT_MAGENTA << " use guardGate !" << RESET << std::endl;
}

void ScavTrap::displayAttributs()
{
	std::cout << "-*-*-*-*-*-*-*-*-*-*-" << std::endl;
	std::cout << "ScavTrap" << std::endl;
 	std::cout << BOLD << "Name: " << this->_name << RESET << std::endl;
	std::cout << "Hit points: " << this->_hitPoints << std::endl;
	std::cout << "Energy points: " << this->_energyPoints << std::endl;
	std::cout << "Attack damage: " << this->_attackDamage << std::endl;
	std::cout << "-*-*-*-*-*-*-*-*-*-*-" << std::endl;
}
