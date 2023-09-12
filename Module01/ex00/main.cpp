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

int main(void)
{
    Zombie* zombie;
    std::string name_alloc;
    std::string name;
    std::cout << "\e[0;36mName of none malloced zombie: \e[0m";
	std::getline (std::cin,name);
    randomChump(name);

    std::cout << std::endl;
    std::cout << "\e[0;36mName of malloced zombie: \e[0m";
	std::getline (std::cin,name_alloc);
    std::cout << std::endl;
    zombie = newZombie(name_alloc);
    zombie->announce();
    delete(zombie);

}
