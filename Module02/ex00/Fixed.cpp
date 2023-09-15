/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 15:47:53 by marvin            #+#    #+#             */
/*   Updated: 2023/09/15 15:47:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::~Fixed(void)
{
	std::cout << "Deconstructor called" << std::endl;
}

Fixed::Fixed(Fixed &cpy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->value = other.getRawBits();
	}
	return *this;
}

int     Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return (this->value);
}

void       Fixed::setRawBits(int const raw) {
    this->value = raw;
}
