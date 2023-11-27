/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thib <thib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 10:53:33 by tserdet           #+#    #+#             */
/*   Updated: 2023/11/27 11:40:12 by thib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "Error: Please enter literal\n" << std::endl;
		return (1);
	}
	ScalarConverter::convert(argv[1]);
	return (1);
}
