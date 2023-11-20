/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 10:52:23 by tserdet           #+#    #+#             */
/*   Updated: 2023/11/20 13:36:30 by tserdet          ###   ########.fr       */
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

int convertToInt(const std::string& input) {
    std::istringstream stream(input);
    int result;

    if (!(stream >> result)) {
        throw std::invalid_argument("Impossible");
    }
    return result;
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
	// Conversion vers char
	try
	{
		std::string charValue = convertToChar(representation);
		std::cout << "Char: " << charValue << std::endl;
	}
	catch (const std::invalid_argument& e)
	{
		std::cerr << "Char :" << e.what() << std::endl;
	}

	// Conversion vers int
	try
	{
		int intValue = convertToInt(representation);
		std::cout << "Int: " << intValue << std::endl;
	}
	catch (const std::invalid_argument& e)
	{
		std::cerr << "Int :" << e.what() << std::endl;
	}

	// Conversion vers float
	float floatValue;
	std::istringstream(representation) >> floatValue;
	std::cout << "float: " << floatValue << std::endl;

	// Conversion vers double
	double doubleValue;
	std::istringstream(representation) >> doubleValue;
	std::cout << "double: " << doubleValue << std::endl;
}

ScalarConverter& ScalarConverter::operator=(ScalarConverter const & hrs)
{
	if (this != &hrs)
	{
		return *this;
	}
	return *this;
}
