/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:57:53 by tserdet           #+#    #+#             */
/*   Updated: 2023/12/12 14:00:50 by tserdet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(const std::string _argument)
{
	std::cout << CYN << "BitcoinExchange Default constructor called\n" << NC;
	std::ifstream inputFile(_argument.c_str());

	if (!inputFile.is_open())
		std::cout << RED << "Invalid file\n" << NC;
	inputFile.close();
}

BitcoinExchange::~BitcoinExchange(void)
{
	std::cout << CYN << "BitcoinExchange Default destructor called\n" << NC;
}

bool isValidFormat(const std::string& line) {
	std::istringstream iss(line);
	std::string datePart, valuePart;

	if (std::getline(iss, datePart, '|') && std::getline(iss, valuePart)) {
		// Vérifiez ici le format de datePart et valuePart selon vos critères
		// ...

		return true;
	}

	return false;
	}
