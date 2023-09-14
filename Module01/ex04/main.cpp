/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:44:40 by marvin            #+#    #+#             */
/*   Updated: 2023/09/14 10:44:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.hpp"


int main(int argc, char **argv)
{
	if (argc == 4)
	{
		File file1;
		if (file1.modifying(argv[1], argv[2], argv[3]) == 1)
			return 1;
	}
	else
		std::cout << RED << \
		"Only 3 arguments needed : ./file <filename> <s1> <s2>" << NC <<std::endl;
}
