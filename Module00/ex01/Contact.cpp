/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 15:18:42 by marvin            #+#    #+#             */
/*   Updated: 2023/09/06 12:05:24 by tserdet          ###   ########.fr       */
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

std::string Contact::get_first_name(void) const
{
	return this->_first_name;
}

std::string Contact::get_last_name(void) const
{
	return this->_last_name;
}

std::string Contact::get_nickname(void) const
{
	return this->_nickname;
}

std::string Contact::get_phone_number(void) const
{
	return this->_phone_number;
}

std::string Contact::get_darkest_secret(void) const
{
	return this->_darkest_secret;
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
