/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:47:40 by marvin            #+#    #+#             */
/*   Updated: 2023/09/12 18:47:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str)
{
	std::cout << "Weapon created" << std::endl;
	this->_type = str;
	return ;
}

Weapon::~Weapon(void)
{
	std::cout << "Weapon destructed" << std::endl;
	return ;
}

const std::string& Weapon::getType(void)
{
	return (this->_type);
}

void Weapon::setType(std::string type)
{
	this->_type = type;
}
