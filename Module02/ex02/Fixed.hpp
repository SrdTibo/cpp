/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 15:48:14 by marvin            #+#    #+#             */
/*   Updated: 2023/09/15 15:48:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H
#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define REDB "\e[41m"
#include <iostream>
#include <string>
#include <cmath>

class	Fixed
{
	public:
		Fixed(void);
		Fixed(const Fixed &cpy);
		Fixed(const int number);
		Fixed(const float constantFloat);
		~Fixed(void);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
		Fixed& operator=(const Fixed& other);
		bool operator>(const Fixed& other) const;
		bool operator<(const Fixed& other) const;
		bool operator>=(const Fixed& other) const;
		bool operator<=(const Fixed& other) const;
		bool operator==(const Fixed& other) const;
		bool operator!=(const Fixed& other) const;
		Fixed operator+(const Fixed& other) const;
		Fixed operator-(const Fixed& other) const;
		Fixed operator*(const Fixed& other) const;
		Fixed operator/(const Fixed& other) const;
		Fixed &operator++(void);
		Fixed operator++(int);
		Fixed &operator--(void);
		Fixed operator--(int);
		static Fixed& min( Fixed &cpy, Fixed &cpy_o);
        static const Fixed& min( const Fixed &cpy, const Fixed &cpy_o);
        static Fixed& max( Fixed &cpy, Fixed &cpy_o);
        static const Fixed& max( const Fixed &cpy, const Fixed &cpy_o);

	private:
		int	_value;
		static const int _fracBit = 8;
};
std::ostream & operator<<( std::ostream & o, Fixed const &cpy);
#endif
