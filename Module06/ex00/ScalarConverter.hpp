/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 10:52:25 by tserdet           #+#    #+#             */
/*   Updated: 2023/11/20 12:59:37 by tserdet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_CLASS_H
# define SCALARCONVERTER_CLASS_H
#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define REDB "\e[41m"
#include <iostream>
#include <string>
#include <sstream>

class	ScalarConverter
{
	public:
		~ScalarConverter(void);
		ScalarConverter(const ScalarConverter &src);

		static void convert(const std::string& representation);

		ScalarConverter &operator=( ScalarConverter const & hrs);

	private:
		ScalarConverter(void);
};
#endif
