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
    std::string name;
    int N = 0;

    std::cout << std::endl;
    std::cout << "Name of malloced zombie:";
	std::getline (std::cin,name);
    std::cout << std::endl;
    std::cout << "Number of zombie:";
	std::cin >> N;
    if (N <= 0 || isdigit(N))
    {
        std::cout << "Please use only positive numbers";
        return (1);
    }
    std::cout << std::endl;
    zombie = zombieHorde(N, name);
    zombie->announce();
    delete [] zombie;
    return (0);
}
