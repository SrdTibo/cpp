/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 15:18:42 by marvin            #+#    #+#             */
/*   Updated: 2023/09/06 13:42:15 by tserdet          ###   ########.fr       */
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

void	PhoneBook::search_contact(void)
{
	char index_inchar[3];
	int			index;
	std::cout << "\e[0;36m------------------------------------------------\e[0m" << std::endl;
	std::cout << "\e[0;36m|   INDEX   | FIRST NAME | LAST NAME | NICNAME |\e[0m" << std::endl;
	std::cout << "\e[0;36m------------------------------------------------\e[0m" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << "| " << std::setw(10) << i;
		std::cout << "| " << std::setw(10) << _contact[i].get_first_name();
		std::cout << "| " << std::setw(10) << _contact[i].get_last_name();
		std::cout << "| " << std::setw(10) << _contact[i].get_nickname();
		std::cout << "| " << std::endl;
	}
	std::cout << "Index : ";
	std::cin >> index_inchar;
	if (!isdigit(index_inchar[0]) || atoi(index_inchar) < 0 || atoi(index_inchar) > 7)
	{
		std::cout << "\e[0;31mOnly numbers between 0 and 7 are accepted\e[0m" << std::endl;
		return ;
	}
	index = atoi(index_inchar);
	std::cout << "First Name :" << _contact[index].get_first_name() << std::endl;
	std::cout << "Last Name :" << _contact[index].get_last_name() << std::endl;
	std::cout << "Nickname :" << _contact[index].get_nickname() << std::endl;
	std::cout << "Phone Number :" << _contact[index].get_phone_number() << std::endl;
	std::cout << "Darkest Secret :" << _contact[index].get_darkest_secret() << std::endl;
	std::cin.clear();
	std::cin.ignore(1000, '\n');
}
