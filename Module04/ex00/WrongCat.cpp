/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:48:54 by tserdet           #+#    #+#             */
/*   Updated: 2023/09/25 11:52:24 by tserdet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	this->_type = "WrongCat";
	std::cout <<CYN<< "Default WrongCat constructor called" <<NC<< std::endl;
	return;
}

WrongCat::WrongCat( WrongCat const & src) : WrongAnimal(src)
{
	std::cout <<CYN<< "Copy WrongCat constructor called" <<NC<< std::endl;
	*this = src;
	return;
}

WrongCat::~WrongCat(void)
{
	std::cout <<CYN<< "Default WrongCat destructor called" <<NC<< std::endl;
	return;
}

WrongCat& WrongCat::operator=( WrongCat const & hrs)
{
	if (this != &hrs)
	{
		this->_type = hrs._type;
	}
	return *this;
}

void WrongCat::makeSound(void)const
{
	std::cout << this->getType() << " WRONG MEOOOWWWWWWWW" << std::endl;
	return;
}
