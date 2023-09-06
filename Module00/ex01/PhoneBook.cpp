/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 15:18:42 by marvin            #+#    #+#             */
/*   Updated: 2023/09/06 11:55:26 by tserdet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void) : _cnt(0)
{
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::add_contact(void)
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
	std::cout << "First Name : ";
	std::getline (std::cin,first_name);
	std::cout << "Last Name : ";
	std::getline (std::cin,last_name);
	std::cout << "Nickname : ";
	std::getline (std::cin,nickname);
	std::cout << "Phone Number : ";
	std::getline (std::cin,phone_number);
	std::cout << "darkest Secret : ";
	std::getline (std::cin,darkest_secret);
	if (first_name == "" || last_name == "" || nickname == ""
		|| phone_number == "" || darkest_secret == "" )
	{
		std::cout << "\e[0;31mA field cannot be empty !\e[0m" << std::endl;
		return ;
	}
	else
	{
		for (int i = 0; i < phone_number.length(); i++)
		{
			if (!isdigit(phone_number[i]))
			{
				std::cout << "\e[0;31mPhone Number need to be only numbers\e[0m" << std::endl;
				return ;
			}
		}
	}
	_contact[_cnt].set(first_name, last_name, nickname, phone_number, darkest_secret);
	std::cout << _cnt << std::endl;
	_cnt++;
	if (_cnt > 7)
		_cnt = 0;
	std::cout << "\e[0;32mContact Added!\e[0m" << std::endl;
}
