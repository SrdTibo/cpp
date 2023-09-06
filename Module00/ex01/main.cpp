/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 15:18:42 by marvin            #+#    #+#             */
/*   Updated: 2023/09/01 15:18:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	PhoneBook	repertoire;
	std::string prompt;
	while (1)
	{
		std::cout << "PhoneBook : ";
		std::getline (std::cin,prompt);
		if (prompt == "ADD")
		{
			std::cout << "-----ADD CONTACT-----" << std::endl;
			repertoire.add_contact();
		}
		else if (prompt == "SEARCH")
			std::cout << "SEARCH" << std::endl;
		else if (prompt == "EXIT")
		{
			std::cout << "Exiting..." << std::endl;
			return (0);
		}
	}
	return (0);
}
