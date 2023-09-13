/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:47:37 by marvin            #+#    #+#             */
/*   Updated: 2023/09/12 18:47:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CLASS_H
# define HUMANA_CLASS_H
#include "Weapon.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

class	HumanA
{
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);
		void attack(void);

    private:
		std::string _name;
		Weapon* _weapon;
};

#endif
