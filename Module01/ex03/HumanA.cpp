/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:47:35 by marvin            #+#    #+#             */
/*   Updated: 2023/09/12 18:47:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &Weapon)
{
	std::cout << "HumanA is born" << std::endl;
	this->_name = name;
	this->_weapon = &Weapon;
}

HumanA::~HumanA(void)
{
	std::cout << "HumanB is dead" << std::endl;
}

void HumanA::attack(void)
{
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}
