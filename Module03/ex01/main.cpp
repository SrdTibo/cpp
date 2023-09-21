/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:39:07 by marvin            #+#    #+#             */
/*   Updated: 2023/09/19 11:39:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap scav("Franklin");
    ScavTrap scav2("Walther");
    ScavTrap scaav = scav;
    scav.attack("walther");
    scav2.takeDamage(500);
    scav2.beRepaired(10);
    scav2.guardGate();
    scaav.guardGate();
    scaav.takeDamage(10);
    scav.takeDamage(20);
    return 0;
	return 0;
}
