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
	std::string av2 = argv[2];
	std::string av3 = argv[3];
	std::string av1 = argv[1];
	if (av1 == "file")
	{
		std::cout << RED << \
		"WTF Don't open the compiled file"\
		<< NC <<std::endl;
		return 1;
	}
	if (argc == 4)
	{
		if (av2 == av3)
		{
			std::cout << RED << \
			"S1 and S2 need to be different : ./file <filename> <s1> <s2>"\
			<< NC <<std::endl;
			return 1;
		}
		else
		{
			File file1;
			if (file1.modifying(argv[1], argv[2], argv[3]) == 1)
				return 1;
		}
	}
	else
		std::cout << RED << \
		"3 arguments needed : ./file <filename> <s1> <s2>" << NC <<std::endl;
}
