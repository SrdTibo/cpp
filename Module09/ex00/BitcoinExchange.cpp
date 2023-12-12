/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:57:53 by tserdet           #+#    #+#             */
/*   Updated: 2023/12/12 16:10:32 by tserdet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(const std::string argument)
{
	std::cout << CYN << "BitcoinExchange Default constructor called\n" << NC;

	int i = 0;
	std::ifstream inputFile(argument.c_str());

	if (!inputFile.is_open())
		throw std::invalid_argument(std::string(RED) + "Invalid file\n" + std::string(RED));
	if (inputFile.peek() == std::ifstream::traits_type::eof())
		throw std::runtime_error(std::string(RED) + "Empty file\n" + NC);
	try
	{
		std::string line;
		while (std::getline(inputFile, line))
		{
			if (i == 0)
			{
				if (line != "date | value")
				{
					throw std::runtime_error(std::string(RED) + "Invalid information in file\n" + std::string(RED));
				}
			}
			else if (i > 0)
			{
				if (!_isValidFormat(line))
					throw std::runtime_error(std::string(RED) + "Invalid information in file\n" + std::string(RED));
			}
			std::cout << line << std::endl;
			i++;
		}
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	inputFile.close();
}

BitcoinExchange::~BitcoinExchange(void)
{
	std::cout << CYN << "BitcoinExchange Default destructor called\n" << NC;
}

bool BitcoinExchange::_isValidFormat(const std::string& line)
{
	std::istringstream iss(line);
	std::string datePart, valuePart;

	if (line.find('|') != std::string::npos)
	{
		if (std::getline(iss, datePart, '|') && std::getline(iss, valuePart))
		{
			if (datePart.empty() || valuePart.empty())
				throw std::runtime_error(std::string(RED) + "Invalid information in file\n" + std::string(RED));
			else if(_isDateValid(datePart) == false)
				throw std::runtime_error(std::string(RED) + "Invalid Date\n" + std::string(RED));
			else if(std::atoi(valuePart.c_str()) > 1000 || std::atoi(valuePart.c_str()) < 0)
				throw std::runtime_error(std::string(RED) + "Invalid Value\n" + std::string(RED));
			return true;
		}
	}
	return false;
}

bool BitcoinExchange::_isDateValid(const std::string& date)
{
	if (date.length() != 11 || date[4] != '-' || date[7] != '-') {
		std::cout << "Format de date incorrect. Utilisez le format Year-Month-Day (ex: 2012-01-03)." << std::endl;
		return false;
	}
	int year, month, day;
	sscanf(date.c_str(), "%d-%d-%d", &year, &month, &day);
	if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31) {
		return false;
	}
	static const int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))) {
		if (day > 29) {
			return false;
		}
	} else {
		if (day > daysInMonth[month]) {
			return false;
		}
	}
	return true;
}
