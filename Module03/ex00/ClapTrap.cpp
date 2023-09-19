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
	std::cout << "Default ClapTrap constructor" << this->_name << "called" << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "User ClapTrap constructor" << this->_name << "called" << std::endl;
	return;
}

ClapTrap::ClapTrap( ClapTrap const & src)
{
	std::cout << "Parametric constructor called" << std::endl;
	*this = src;
	return;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Default destructor called" << std::endl;
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
