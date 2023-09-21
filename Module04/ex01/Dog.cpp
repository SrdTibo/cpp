/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:41:29 by tserdet           #+#    #+#             */
/*   Updated: 2023/09/21 14:30:48 by tserdet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	this->_type = "Dog";
	std::cout <<CYN<< "Default Dog constructor called" <<NC<< std::endl;
	return;
}

Dog::Dog( Dog const & src) : Animal(src)
{
	std::cout <<CYN<< "Copy constructor called" <<NC<< std::endl;
	*this = src;
	return;
}

Dog::~Dog(void)
{
	std::cout <<CYN<< "Default destructor called" <<NC<< std::endl;
	delete _brain;
	return;
}

Dog& Dog::operator=( Dog const & hrs)
{
	if (this != &hrs)
	{
		this->_type = hrs._type;
	}
	return *this;
}

void Dog::makeSound(void)const
{
	std::cout << getType() << " WOUF" << std::endl;
	return;
}
