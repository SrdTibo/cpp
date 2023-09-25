/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:39:55 by tserdet           #+#    #+#             */
/*   Updated: 2023/09/25 11:53:48 by tserdet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void)
{
	this->_type = "AAnimal";
	std::cout <<CYN<< "Default AAnimal constructor called" <<NC<< std::endl;
	return;
}

AAnimal::AAnimal( AAnimal const & src)
{
	std::cout <<CYN<< "Copy AAnimal constructor called" <<NC<< std::endl;
	*this = src;
	return;
}

AAnimal::~AAnimal(void)
{
	std::cout <<CYN<< "Default AAnimal destructor called" <<NC<< std::endl;
	return;
}

AAnimal& AAnimal::operator=( AAnimal const & hrs)
{
	if (this != &hrs)
	{
		this->_type = hrs._type;
	}
	return *this;
}

std::string	AAnimal::getType(void)const
{
	return (this->_type);
}

void AAnimal::makeSound(void)const
{
	std::cout << "This Aanimal does not make any sound" << std::endl;
	return;
}
