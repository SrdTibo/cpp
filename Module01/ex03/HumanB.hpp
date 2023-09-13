/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:47:38 by marvin            #+#    #+#             */
/*   Updated: 2023/09/12 18:47:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CLASS_H
# define HUMANB_CLASS_H
#include "Weapon.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

class	HumanB
{
	public:
		HumanB(std::string nam);
		~HumanB(void);
		void attack(void);
		void setWeapon(Weapon &weapon);

    private:
		std::string _name;
		Weapon* _weapon;
};

#endif
