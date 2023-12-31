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
		if (prompt.compare("ADD") == 0)
		{
			std::cout << "\e[0;36m-----ADD CONTACT-----\e[0m" << std::endl;
			repertoire.add_contact();
		}
		else if (prompt.compare("SEARCH") == 0)
			repertoire.search_contact();
		else if (prompt.compare("EXIT") == 0)
		{
			std::cout << "Exiting..." << std::endl;
			return (0);
		}
	}
	return (0);
}
