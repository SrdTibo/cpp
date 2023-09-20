/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:28:36 by marvin            #+#    #+#             */
/*   Updated: 2023/09/20 10:28:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	this->_name = "Ghost";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout <<CYN<< "Default ScavTrap constructor " << this->_name << " called" <<NC<< std::endl;
	return;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout <<CYN<< "User ScavTrap constructor" << this->_name << "called" <<NC<< std::endl;
	return;
}

ScavTrap::ScavTrap( ScavTrap const & src) ClapTrap(src)
{
	std::cout <<CYN<< "Copy constructor called" <<NC<< std::endl;
	*this = src;
	return;
}

ScavTrap::~ScavTrap(void)
{
	std::cout <<CYN<< "Default destructor called" <<NC<< std::endl;
	return;
}

ScavTrap& ScavTrap::operator=( ScavTrap const & hrs)
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

void ScavTrap::attack(const std::string& target)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout <<GRN<< "ScavTrap " << this->_name << \
		" attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << \
		NC<<std::endl;
		this->_energyPoints--;
	}
	else
		std::cout <<RED<< "ScavTrap " << this->_name << " energyPoints or hitPoints too low to attack." <<NC<<\
		 std::endl;
}
