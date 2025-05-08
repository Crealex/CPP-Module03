
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "colors.h"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): _name("Default FragTrap"), FragTrap(), ScavTrap()
{
	ClapTrap::_name = _name + "_clap_name";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << GREEN << "Default DiamondTrap constructor called" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): _name(name), FragTrap(), ScavTrap()
{
	ClapTrap::_name = _name + "_clap_name";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << LIGHT_GREEN << "DiamondTrap constructor called with the name " << ITALIC << this->_name << RESET << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &cpy): ScavTrap(cpy._name)
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
