/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:41:53 by marvin            #+#    #+#             */
/*   Updated: 2023/09/12 11:41:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{

}

Zombie::~Zombie(void)
{
    std::cout << this->_name << this->_N << " died" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->_name << this->_N << ": BraiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setNameAndN(int N, std::string name)
{
    this->_name = name;
    this->_N = N;
}
