/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:42:17 by tserdet           #+#    #+#             */
/*   Updated: 2023/09/21 14:30:45 by tserdet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	this->_type = "Cat";
	std::cout <<CYN<< "Default Cat constructor called" <<NC<< std::endl;
	return;
}

Cat::Cat( Cat const & src) : Animal(src)
{
	std::cout <<CYN<< "Copy constructor called" <<NC<< std::endl;
	*this = src;
	return;
}

Cat::~Cat(void)
{
	std::cout <<CYN<< "Default destructor called" <<NC<< std::endl;
	delete _brain;
	return;
}

Cat& Cat::operator=( Cat const & hrs)
{
	if (this != &hrs)
	{
		this->_type = hrs._type;
	}
	return *this;
}

void Cat::makeSound(void)const
{
	std::cout << this->getType() << " MEOOOWWWWWWWW" << std::endl;
	return;
}
