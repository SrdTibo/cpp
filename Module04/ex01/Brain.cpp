/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:24:48 by tserdet           #+#    #+#             */
/*   Updated: 2023/09/21 14:36:16 by tserdet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	this->_type = "Brain";
	std::cout <<CYN<< "Default Brain constructor called" <<NC<< std::endl;
	return;
}

Brain::Brain( Brain const & src)
{
	std::cout <<CYN<< "Copy constructor called" <<NC<< std::endl;
	*this = src;
	return;
}

Brain::~Brain(void)
{
	std::cout <<CYN<< "Default destructor called" <<NC<< std::endl;
	delete _brain;
	return;
}

Brain& Brain::operator=( Brain const & hrs)
{
	if (this != &hrs)
	{
		for (int i = 0; i < 100; i++) {
            this->_ideas[i] = hrs._ideas[i];
	}
	return *this;
}
