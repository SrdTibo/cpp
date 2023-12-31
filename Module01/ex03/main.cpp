/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:47:39 by marvin            #+#    #+#             */
/*   Updated: 2023/09/12 18:47:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
	std::cout << "Human A" << std::endl;
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Human A", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
	{
		std::cout << "Human B with weapon" << std::endl;
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Human B");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	{
		std::cout << "Human B without weapon" << std::endl;
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Human B2");
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}
