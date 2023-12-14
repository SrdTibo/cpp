/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 11:52:38 by tserdet           #+#    #+#             */
/*   Updated: 2023/12/14 13:26:39 by tserdet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		RPN r(argv[1]);
	}
	else
	{
		std::cout << RED << "RPN need 1 argument" << NC << std::endl;
		return (1);
	}
	return (0);
}
