/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thib <thib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:57:53 by tserdet           #+#    #+#             */
/*   Updated: 2023/12/13 17:20:11 by thib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void)
{
	std::cout << CYN << "BitcoinExchange Default constructor called\n" << NC;
}

BitcoinExchange::BitcoinExchange(const std::string argument)
{
	std::cout << CYN << "BitcoinExchange arg constructor called\n" << NC;

	int i = 0;
	std::ifstream inputFile(argument.c_str());

	if (!inputFile.is_open())
		throw std::invalid_argument(std::string(RED) + "Invalid input file\n" + std::string(RED));
	if (inputFile.peek() == std::ifstream::traits_type::eof())
		throw std::runtime_error(std::string(RED) + "Empty input file\n" + NC);
	try
	{
		_parseCsv();
		std::string line;
		while (std::getline(inputFile, line))
		{
			if (i == 0)
			{
				if (line != "date | value")
					std::cout << RED << "Invalid information in file\n" << NC << std::endl;
			}
			else if (i > 0)
			{
				if (!_isValidFormat(line))
					std::cout << RED << "Invalid information in file\n" << NC << std::endl;
			}
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
				std::cout << RED << "Invalid information in file\n" << NC;
			else if(_isDateValid(datePart) == false)
				std::cout << RED << "Invalid Date\n" << NC;
			else if(std::atoi(valuePart.c_str()) > 1000 || std::atoi(valuePart.c_str()) < 0)
				std::cout << RED << "Invalid Value\n"  << NC;
			else
				std::cout << datePart << "=> " << valuePart << " = " << _getBitcoinPrice(datePart) * atof(valuePart.c_str()) << std::endl;
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

void BitcoinExchange::_parseCsv(void)
{
	int i = 0;
	std::ifstream inputFile("data.csv");

	if (!inputFile.is_open())
		throw std::invalid_argument("Invalid data file");

	if (inputFile.peek() == std::ifstream::traits_type::eof())
		throw std::runtime_error("Empty data file");

	std::string line;
	while (std::getline(inputFile, line))
	{
		if (i > 0)
		{
			char* endptr;
			std::istringstream iss(line);
			std::string datePart, valuePart;

			if (line.find(',') != std::string::npos)
			{
				if (std::getline(iss, datePart, ',') && std::getline(iss, valuePart))
					_bitcoinPrices[datePart] =  strtod(valuePart.c_str(), &endptr);
			}
		}
		i++;
	}

	inputFile.close();
}

void BitcoinExchange::_printBitcoinPrices() const
{
	std::map<std::string, double>::const_iterator it;
	for (it = _bitcoinPrices.begin(); it != _bitcoinPrices.end(); ++it) {
		std::cout << it->first << ":" << it->second << std::endl;
	}
}

double BitcoinExchange::_getBitcoinPrice(const std::string& date) const
{
	std::string dateUpdated = date.substr(0, date.size() - 1);
	std::map<std::string, double>::const_iterator it = _bitcoinPrices.lower_bound(dateUpdated);

	if (it != _bitcoinPrices.end())
	{
		return it->second;
	}
	else
	{
		return 0;
	}
}
