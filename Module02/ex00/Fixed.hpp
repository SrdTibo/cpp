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

class	Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed &cpy);
		Fixed& operator=(const Fixed& other);
		~Fixed(void);
		int getRawBits( void ) const;
		void setRawBits( int const raw );

	private:
		int	value;
		static const int fracBit = 8;
};
#endif
