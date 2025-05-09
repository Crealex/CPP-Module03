
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "colors.h"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("Default DiamondTrap_clap_name"),FragTrap(), ScavTrap(), _name("Default DiamondTrap")
{
	this->_hitPoints = 100; // from FragTrap
	this->_attackDamage = 30; // from FragTrap
	std::cout << GREEN << "Default DiamondTrap constructor called" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap(), _name(name)
{
	this->_hitPoints = 100; // From FragTrap
	this->_attackDamage = 30; // from FragTrap
	std::cout << LIGHT_GREEN << "DiamondTrap constructor called with the name " << ITALIC << this->_name << RESET << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &cpy): ClapTrap(cpy._name + "_clap_name") , FragTrap(), ScavTrap(cpy._name)
{
	this->_attackDamage = cpy._attackDamage;
	this->_hitPoints = cpy._hitPoints;
	this->_energyPoints = cpy._energyPoints;
	std::cout << BLUE << "Copy constructor DiamondTrap called" << RESET << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << RED << "Destructor DiamondTrap called" << RESET << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs)
{
	this->_name = rhs._name;
	ClapTrap::_name = rhs._name + "_clap_name";
	this->_attackDamage = rhs._attackDamage;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	std::cout << "Assignment operator DiamdonTrap called for " << ITALIC << this->_name << RESET << std::endl;
	return (*this);
}

void DiamondTrap::whoAmI()
{
	std::cout << BOLD << "WhoAmI called" << RESET <<std::endl;
	std::cout << "Name: " << this->_name << RESET << std::endl;
	std::cout << "Clap_name: " << ClapTrap::_name << std::endl;
}

void DiamondTrap::displayAttributs()
{
	std::cout << "-*-*-*-*-*-*-*-*-*-*-" << std::endl;
	std::cout << "DiamondTrap" << std::endl;
	std::cout << BOLD << "Name: " << this->_name << RESET << std::endl;
	std::cout << "Clap_name: " << ClapTrap::_name << std::endl;
	std::cout << "Hit points: " << this->_hitPoints << std::endl;
	std::cout << "Energy points: " << this->_energyPoints << std::endl;
	std::cout << "Attack damage: " << this->_attackDamage << std::endl;
	std::cout << "-*-*-*-*-*-*-*-*-*-*-" << std::endl;
}
