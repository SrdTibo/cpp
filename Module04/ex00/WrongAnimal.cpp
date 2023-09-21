/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:41:09 by tserdet           #+#    #+#             */
/*   Updated: 2023/09/21 13:59:19 by tserdet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	this->_type = "WrongAnimal";
	std::cout <<CYN<< "Default WrongAnimal constructor called" <<NC<< std::endl;
	return;
}

WrongAnimal::WrongAnimal( WrongAnimal const & src)
{
	std::cout <<CYN<< "Copy constructor called" <<NC<< std::endl;
	*this = src;
	return;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout <<CYN<< "Default destructor called" <<NC<< std::endl;
	return;
}

WrongAnimal& WrongAnimal::operator=( WrongAnimal const & hrs)
{
	if (this != &hrs)
	{
		this->_type = hrs._type;
	}
	return *this;
}

std::string	WrongAnimal::getType(void)const
{
	return (this->_type);
}

void WrongAnimal::makeSound(void)const
{
	std::cout << "This Wronganimal does not make any sound" << std::endl;
	return;
}
