/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:23:23 by tserdet           #+#    #+#             */
/*   Updated: 2023/12/15 15:40:44 by tserdet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
	std::cout << CYN << "PmergeMe Default constructor called\n" << NC;
}

PmergeMe::PmergeMe(char **arg)
{
	std::cout << CYN << "PmergeMe arg constructor called\n" << NC;
	try
	{
		if (_parse(arg) == 1)
			throw std::invalid_argument(std::string(RED) + "Invalid input argument\n" + std::string(RED));
		else
		{

		}
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

PmergeMe::~PmergeMe(void)
{
	std::cout << CYN << "PmergeMe Default destructor called\n" << NC;
}

bool PmergeMe::_parse(char **arg)
{
	int i = 0;
	int y = 0;
	while(arg[i])
	{
		if (i > 0)
		{
			while (arg[i][y])
			{
				if (arg[i][y] < 48 || arg[i][y] > 57)
					return 1;
				y++;
			}
		}
		std::cout << arg[i] << std::endl;
		y = 0;
		i++;
	}
	return (0);
}
