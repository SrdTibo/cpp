/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:42:17 by tserdet           #+#    #+#             */
/*   Updated: 2023/09/25 11:53:57 by tserdet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : AAnimal()
{
	this->_brain = new Brain();
	std::cout <<CYN<< "Default Cat constructor called" <<NC<< std::endl;
	return;
}

Cat::Cat( Cat const & src) : AAnimal(src)
{
	std::cout <<CYN<< "Copy Cat constructor called" <<NC<< std::endl;
	*this = src;
	return;
}

Cat::~Cat(void)
{
	std::cout <<CYN<< "Default Cat destructor called" <<NC<< std::endl;
	delete this->_brain;
	return;
}

Cat& Cat::operator=( Cat const & hrs)
{
	if (this != &hrs)
	{
		this->_type = hrs._type;
		this->_brain = new Brain(*hrs._brain);
	}
	return *this;
}

void Cat::makeSound(void)const
{
	std::cout << this->getType() << " MEOOOWWWWWWWW" << std::endl;
	return;
}
