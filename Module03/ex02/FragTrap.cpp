/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:22:35 by tserdet           #+#    #+#             */
/*   Updated: 2023/09/21 11:37:05 by tserdet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	this->_name = "Ghost";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout <<CYN<< "Default FragTrap constructor " << this->_name << " called" <<NC<< std::endl;
	return;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout <<CYN<< "User FragTrap constructor " << this->_name << " called" <<NC<< std::endl;
	return;
}

FragTrap::FragTrap( FragTrap const & src) : ClapTrap(src)
{
	std::cout <<CYN<< "Copy constructor called" <<NC<< std::endl;
	*this = src;
	return;
}

FragTrap::~FragTrap(void)
{
	std::cout <<CYN<< "Default destructor called" <<NC<< std::endl;
	return;
}

FragTrap& FragTrap::operator=( FragTrap const & hrs)
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

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap" << this->_name << "wants to positive high five!" << std::endl;
	return;
}
