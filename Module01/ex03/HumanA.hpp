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
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

class	HumanA
{
	public:
		HumanA(void);
		~HumanA(void);
		void attack(void);
		void setWeapon(Weapon weapon);

    private:
        std::string _type;
};

#endif
