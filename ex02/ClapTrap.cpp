
#include "ClapTrap.hpp"
#include "colors.h"

ClapTrap::ClapTrap(): _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << GREEN << "Default ClapTrap constructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << CYAN << "Constructor with the name " << ITALIC << name << RESET << CYAN << " called" << " (ClapTrap)" << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cpy): _name(cpy._name), _hitPoints(cpy._hitPoints), _energyPoints(cpy._energyPoints), _attackDamage(cpy._attackDamage)
{
	std::cout << BLUE << "Copy constructor of " << ITALIC << cpy._name << RESET << BLUE << " called" << RESET << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << RED << "Destructor of " << ITALIC << this->_name << RESET << RED << " called (ClapTrap)" << RESET << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	std::cout << "Assignment operator ClapTrap called for " << ITALIC << rhs._name << RESET << std::endl;
	return (*this);
}

void ClapTrap::attack(const std::string &target)
{
	if (this->_energyPoints <= 0)
	{
		std::cout << YELLOW << BOLD << "Not enough energy remaining !" << RESET << std::endl;
		return ;
	}
	this->_energyPoints--;
	std::cout << LIGHT_RED << BOLD << target << " take " << this->_attackDamage << " damage points from " << ITALIC << this->_name << RESET << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitPoints -= amount;
	std::cout << LIGHT_MAGENTA << ITALIC << this->_name << RESET << LIGHT_MAGENTA << " lose " << amount << " hitPoints" << RESET << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints <= 0)
	{
		std::cout << YELLOW << BOLD << "Not enough energy remaining !" << RESET << std::endl;
		return ;
	}
	this->_hitPoints += amount;
	this->_energyPoints--;
	std::cout << LIGHT_GREEN << ITALIC << this->_name << RESET << LIGHT_GREEN << " repairs itself from " << amount << " hitPoints" << std::endl;
}

void ClapTrap::displayAttributs()
{
	std::cout << "-*-*-*-*-*-*-*-*-*-*-" << std::endl;
	std::cout << "ClapTrap" << std::endl;
	std::cout << BOLD << "Name: " << this->_name << RESET << std::endl;
	std::cout << "Hit points: " << this->_hitPoints << std::endl;
	std::cout << "Energy points: " << this->_energyPoints << std::endl;
	std::cout << "Attack damage: " << this->_attackDamage << std::endl;
	std::cout << "-*-*-*-*-*-*-*-*-*-*-" << std::endl;
}