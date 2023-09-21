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
#include "FragTrap.hpp"

int main(void)
{
    FragTrap scav("Franklin");
    FragTrap scav2("Walther");
    FragTrap scaav = scav;
    scav.attack("walther");
    scav2.takeDamage(500);
    scav2.takeDamage(100);
    scav2.beRepaired(10);
    scav2.takeDamage(100);
    scav2.highFivesGuys();
    scaav.highFivesGuys();
    scaav.takeDamage(10);
    scav.takeDamage(20);
    scav.beRepaired(100);
    scaav.attack("walther");
}
