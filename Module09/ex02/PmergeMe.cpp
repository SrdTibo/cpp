/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:23:23 by tserdet           #+#    #+#             */
/*   Updated: 2023/12/15 16:14:40 by tserdet          ###   ########.fr       */
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
			_fillContainer(_dq, arg);
			_fillContainer(_vct, arg);
			afficherContainer(_dq);
			afficherContainer(_vct);
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
		y = 0;
		i++;
	}
	return (0);
}

template <typename Container>
void PmergeMe::_fillContainer(Container& container, char** arg)
{
	int i = 0;
	while (arg[i]) {
		if (i > 0)
			container.push_back(atoi(arg[i]));
		i++;
	}
}

template <typename Container>
void PmergeMe::afficherContainer(const Container& container) const
{
	typename Container::const_iterator it;
	std::cout << "Container elements: ";
	for (it = container.begin(); it != container.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}
