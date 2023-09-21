/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:39:55 by tserdet           #+#    #+#             */
/*   Updated: 2023/09/21 13:34:24 by tserdet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	this->_type = "Animal";
	std::cout <<CYN<< "Default Animal constructor called" <<NC<< std::endl;
	return;
}

Animal::Animal( Animal const & src)
{
	std::cout <<CYN<< "Copy constructor called" <<NC<< std::endl;
	*this = src;
	return;
}

Animal::~Animal(void)
{
	std::cout <<CYN<< "Default destructor called" <<NC<< std::endl;
	return;
}

Animal& Animal::operator=( Animal const & hrs)
{
	if (this != &hrs)
	{
		this->_type = hrs._type;
	}
	return *this;
}

std::string	Animal::getType(void)const
{
	return (this->_type);
}

void Animal::makeSound(void)const
{
	std::cout << "This animal does not make any sound" << std::endl;
	return;
}
