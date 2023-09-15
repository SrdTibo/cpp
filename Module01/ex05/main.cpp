/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 10:22:53 by marvin            #+#    #+#             */
/*   Updated: 2023/09/15 10:22:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (void)
{
	Harl harl;
	std::string prompt;
	std::cout << "DEBUG, INFO, WARNING or ERROR? : ";
	std::getline (std::cin,prompt);
	harl.complain(prompt);
	return 0;
}
