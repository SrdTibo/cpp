/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 15:18:42 by marvin            #+#    #+#             */
/*   Updated: 2023/09/06 11:42:31 by tserdet          ###   ########.fr       */
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
	this->_last_name = last_name;
	this->_nickname = nickname;
	this->_phone_number = phone_number;
	this->_darkest_secret = darkest_secret;
	std::cout << first_name << std::endl;
	std::cout << last_name << std::endl;
	std::cout << nickname << std::endl;
	std::cout << phone_number << std::endl;
	std::cout << darkest_secret << std::endl;
}
