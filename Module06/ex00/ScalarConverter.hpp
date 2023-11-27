/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thib <thib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 10:52:25 by tserdet           #+#    #+#             */
/*   Updated: 2023/11/27 11:49:43 by thib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_CLASS_H
#define SCALARCONVERTER_CLASS_H
#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define REDB "\e[41m"
#include <string>
#include <iostream>
#include <cstdlib>
#include <climits>

class ScalarConverter
{
	public:
		public:
			ScalarConverter();
			ScalarConverter(const ScalarConverter &src);
			ScalarConverter& operator=(const ScalarConverter &src);
			~ScalarConverter();
			static void convert(const std::string &literal);
};

#endif
