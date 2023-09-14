/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:47:33 by marvin            #+#    #+#             */
/*   Updated: 2023/09/12 18:47:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	std::cout << "HumanB is born" << std::endl;
	this->_name = name;
	this->_weapon = NULL;
}

HumanB::~HumanB(void)
{
	std::cout << "HumanB is dead" << std::endl;
}

void HumanB::attack(void) const
{
	if (this->_weapon == NULL)
		std::cout << this->_name << " attacks with his hands" << std::endl;
	else
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &Weapon)
{
	this->_weapon = &Weapon;
}
