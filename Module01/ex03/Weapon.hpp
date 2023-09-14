/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:47:41 by marvin            #+#    #+#             */
/*   Updated: 2023/09/12 18:47:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_H
# define WEAPON_CLASS_H
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

class	Weapon
{
	public:
		Weapon(std::string str);
		~Weapon(void);
        const std::string&	getType(void);
		void setType(std::string type);

    private:
        std::string _type;
};

#endif
