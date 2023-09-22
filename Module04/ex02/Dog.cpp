/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:41:29 by tserdet           #+#    #+#             */
/*   Updated: 2023/09/22 12:29:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : AAnimal()
{
	this->_brain = new Brain();
	std::cout <<CYN<< "Default Dog constructor called" <<NC<< std::endl;
	return;
}

Dog::Dog( Dog const & src) : AAnimal(src)
{
	std::cout <<CYN<< "Copy constructor called" <<NC<< std::endl;
	*this = src;
	return;
}

Dog::~Dog(void)
{
	std::cout <<CYN<< "Default destructor called" <<NC<< std::endl;
	delete this->_brain;
	return;
}

Dog& Dog::operator=( Dog const & hrs)
{
	if (this != &hrs)
	{
		this->_type = hrs._type;
		this->_brain = new Brain(*hrs._brain);
	}
	return *this;
}

void Dog::makeSound(void)const
{
	std::cout << getType() << " WOUF" << std::endl;
	return;
}
