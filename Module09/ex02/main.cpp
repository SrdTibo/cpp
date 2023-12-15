/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:18:49 by tserdet           #+#    #+#             */
/*   Updated: 2023/12/15 15:10:48 by tserdet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char**argv)
{
	if (argc > 1)
	{
		PmergeMe merge(argv);
	}
	else
	{
		std::cout << RED << "Wrong argrs\n" << NC;
		return (1);
	}
}
