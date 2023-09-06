/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 15:18:42 by marvin            #+#    #+#             */
/*   Updated: 2023/09/06 11:49:55 by tserdet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	//std::cout << "Constructor called" << std::endl;
	return ;
}

Contact::~Contact(void)
{
	//std::cout << "Destructor called" << std::endl;
	return ;
}

void	Contact::set(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret)
{
	if (first_name.length() > 10)
	{
		first_name[9] = '.';
		first_name.erase(10);
	}
	this->_first_name = first_name;
	if (last_name.length() > 10)
	{
		last_name[9] = '.';
		last_name.erase(10);
	}
	this->_last_name = last_name;
	if (nickname.length() > 10)
	{
		nickname[9] = '.';
		nickname.erase(10);
	}
	this->_nickname = nickname;
	if (phone_number.length() > 10)
	{
		phone_number[9] = '.';
		phone_number.erase(10);
	}
	this->_phone_number = phone_number;
	if (darkest_secret.length() > 10)
	{
		darkest_secret[9] = '.';
		darkest_secret.erase(10);
	}
	this->_darkest_secret = darkest_secret;
}
