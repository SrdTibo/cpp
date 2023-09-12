/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:34:18 by marvin            #+#    #+#             */
/*   Updated: 2023/09/12 11:34:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_H
# define ZOMBIE_CLASS_H
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

class	Zombie
{
	public:
		Zombie(void);
		~Zombie(void);

        void announce(void);
		void setNameAndN(int N, std::string name);

    private:
        std::string _name;
		int	_N;
};
Zombie* zombieHorde( int N, std::string name );
#endif
