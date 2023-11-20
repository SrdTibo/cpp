/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 10:53:33 by tserdet           #+#    #+#             */
/*   Updated: 2023/11/20 13:37:57 by tserdet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    if (argc>1 && argc<3)
	{
		ScalarConverter::convert(argv[1]);
	}
	else
	{
		std::cout << "Invalid Arguments" << std::endl;
	}
    return 0;
}
