/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:23:23 by tserdet           #+#    #+#             */
/*   Updated: 2023/12/18 11:47:13 by tserdet          ###   ########.fr       */
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
			clock_t start1 = clock();
			mergeInsertSortDeque(_dq);
			clock_t end1 = clock();
			double time1 = static_cast<double>(end1 - start1) / CLOCKS_PER_SEC * 1000;
			clock_t start2 = clock();
			mergeInsertSortVector(_vct);
			clock_t end2 = clock();
			double time2 = static_cast<double>(end2 - start2) / CLOCKS_PER_SEC * 1000;
			afficherContainer(_dq);
			afficherContainer(_vct);
			std::cout << "Time to process a range of " << _dq.size() << " elements with std::deque container: " << time1 << " us" << std::endl;
			std::cout << "Time to process a range of " << _vct.size() << " elements with std::vector container: " << time2 << " us" << std::endl;
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
	while (arg[i])
	{
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
	for (it = container.begin(); it != container.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void PmergeMe::mergeInsertSortDeque(std::deque<int>& arr)
{
	for (std::deque<int>::iterator it1 = arr.begin() + 1; it1 != arr.end(); ++it1)
	{
		int temp = *it1;
		std::deque<int>::iterator it2 = it1;
		while (it2 != arr.begin() && *(it2 - 1) > temp)
		{
			*it2 = *(it2 - 1);
			--it2;
		}
		*it2 = temp;
	}
}

void PmergeMe::mergeInsertSortVector(std::vector<int>& arr)
{
	for (typename std::vector<int>::iterator it1 = arr.begin() + 1; it1 != arr.end(); ++it1)
	{
		int temp = *it1;
		typename std::vector<int>::iterator it2 = it1;
		while (it2 != arr.begin() && *(it2 - 1) > temp)
		{
			*it2 = *(it2 - 1);
			--it2;
		}
		*it2 = temp;
	}
}
