/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:55:54 by marvin            #+#    #+#             */
/*   Updated: 2023/09/12 11:55:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
	Zombie* alloc_zombie = new Zombie[N];
	for (int i = 0; i < N; i++)
    {
		alloc_zombie[i].setNameAndN(i, name);
		std::cout << name << i << " created" <<std::endl;
		alloc_zombie[i].announce();
    }
	return(alloc_zombie);
}
