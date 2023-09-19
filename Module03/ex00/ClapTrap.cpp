/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:39:33 by marvin            #+#    #+#             */
/*   Updated: 2023/09/19 11:39:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	this->_name = "Ghost";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout <<CYN<< "Default ClapTrap constructor " << this->_name << " called" <<NC<< std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout <<CYN<< "User ClapTrap constructor" << this->_name << "called" <<NC<< std::endl;
	return;
}

ClapTrap::ClapTrap( ClapTrap const & src)
{
	std::cout <<CYN<< "Copy constructor called" <<NC<< std::endl;
	*this = src;
	return;
}

ClapTrap::~ClapTrap(void)
{
	std::cout <<CYN<< "Default destructor called" <<NC<< std::endl;
	return;
}

ClapTrap& ClapTrap::operator=( ClapTrap const & hrs)
{
	if (this != &hrs)
	{
		this->_name = hrs._name;
		this->_hitPoints = hrs._hitPoints;
		this->_energyPoints = hrs._energyPoints;
		this->_attackDamage = hrs._attackDamage;
	}
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout <<GRN<< "ClapTrap " << this->_name << \
		" attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << \
		NC<<std::endl;
		this->_energyPoints--;
	}
	else
		std::cout <<RED<< "EnergyPoints or hitPoints too low to attack." <<NC<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints < amount)
	this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;
	std::cout <<GRN<< "ClapTrap " << this->_name << " took " << amount << " damage " << \
	"and is now at " << this->_hitPoints << " hitPoints." <<NC<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0)
	{
		this->_hitPoints += amount;
		std::cout <<GRN<< "ClapTrap " << this->_name << " took " << amount <<\
		"hitPoints back" << std::endl;
	}
	else
		std::cout <<RED<< "EnergyPoints are too low" <<NC<< std::endl;
}
