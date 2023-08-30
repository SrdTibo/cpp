/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 11:27:02 by tserdet           #+#    #+#             */
/*   Updated: 2023/08/30 20:50:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (int argc, char **argv)
{
	int i = 1;
	int j = 0;

	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}

	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			std::cout << (char)std::toupper(argv[i][j]);
			j++;
		}
		std::cout << ' ';
		j = 0;
		i++;
	}
	std::cout << std::endl;
	return 0;
}
