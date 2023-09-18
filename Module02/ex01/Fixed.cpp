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
	this->_value = 0;
}

Fixed::~Fixed(void)
{
	std::cout << "Deconstructor called" << std::endl;
}

Fixed::Fixed(const Fixed &cpy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

Fixed::Fixed(const int number)
{
	_value = number << _fracBit;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float number)
{
    _value = roundf(number * (1 << _fracBit));
    std::cout << "Float constructor called" << std::endl;
}

float   Fixed::toFloat( void ) const
{
    return static_cast<float>(this->getRawBits() ) / ( 1 << _fracBit);
}

int     Fixed::toInt(void) const
{
    return (this->_value >> _fracBit);
}

std::ostream & operator<<( std::ostream & o, Fixed const & cpy) {
    o << cpy.toFloat();
    return (o);
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		_value = other.getRawBits();
	}
	return *this;
}

int     Fixed::getRawBits(void) const {
/*     std::cout << "getRawBits member function called" << std::endl; */
    return (this->_value);
}

void       Fixed::setRawBits(int const raw) {
    _value = raw;
}
