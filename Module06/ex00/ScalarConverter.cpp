/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 10:52:23 by tserdet           #+#    #+#             */
/*   Updated: 2023/11/20 14:08:03 by tserdet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void)
{
	std::cout <<CYN<< "Default ScalarConverter constructor called" <<NC<< std::endl;
	return;
}

ScalarConverter::~ScalarConverter(void)
{
	std::cout <<CYN <<"ScalarConverter destructor called" <<NC<< std::endl;
	return;
}

ScalarConverter::ScalarConverter(ScalarConverter const & src)
{
	std::cout <<CYN<< "Copy ScalarConverter constructor called" <<NC<< std::endl;
	*this = src;
	return;
}

std::string convertToChar(const std::string& input) {
    std::stringstream convertisseur(input);
    std::string result;

    if (!(convertisseur >> result)) {
        throw std::invalid_argument("Impossible");
    }
    return result;
}

void ScalarConverter::convert(const std::string& representation)
{
	if (input == "-inff" || input == "+inff" || input == "nanf")
	{
	// C'est une littérale spéciale pour float et double
	// Effectuez la conversion appropriée
	}
	else if (input == "-inf" || input == "+inf" || input == "nan")
	{
	// C'est une littérale spéciale pour float et double
	// Effectuez la conversion appropriée
	}
	else
	{
		try {
		std::cout << "Int :" << std::stoi(representation) << std::endl;
		}
		catch (std::out_of_range const& e)
		{
			std::cout<< "Int : Out of Range" << std::endl;
		}
	}
}

ScalarConverter& ScalarConverter::operator=(ScalarConverter const & hrs)
{
	if (this != &hrs)
	{
		return *this;
	}
	return *this;
}
