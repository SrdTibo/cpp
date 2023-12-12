/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:57:55 by tserdet           #+#    #+#             */
/*   Updated: 2023/12/12 15:59:50 by tserdet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_CLASS_H
# define BITCOINEXCHANGE_CLASS_H
#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define REDB "\e[41m"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <string>
#include <cstdlib>
#include <map>

class	BitcoinExchange
{
	public:
		BitcoinExchange(const std::string argument);
		~BitcoinExchange(void);
		BitcoinExchange(const BitcoinExchange &src);

		BitcoinExchange &operator=( BitcoinExchange const & hrs);

	private:
		std::map<int, double> _bitcoinPrices;
		bool _isValidFormat(const std::string& line);
		bool _isDateValid(const std::string& dateString);
};
#endif
