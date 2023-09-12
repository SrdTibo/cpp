/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:26:45 by marvin            #+#    #+#             */
/*   Updated: 2023/09/12 18:26:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string	str = "HI THIS IS BRAIN";

	std::string* strPtr = &str;
	std::string& strRef = str;
	std::cout << "\e[0;36mAdress of string: \e[0m" << &str << std::endl;
	std::cout << "\e[0;36mAdress of pointer: \e[0m" << strPtr << std::endl;
	std::cout << "\e[0;36mAdress of reference: \e[0m" << &strRef << std::endl;
	std::cout << "\e[0;36mValue of string: \e[0m" << str << std::endl;
	std::cout << "\e[0;36mValue of pointer: \e[0m" << *strPtr << std::endl;
	std::cout << "\e[0;36mValue of reference: \e[0m" << strRef << std::endl;
}
