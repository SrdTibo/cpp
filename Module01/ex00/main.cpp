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
    std::cout << "Name of none malloced zombie:";
	std::getline (std::cin,name);

    std::cout << std::endl;
    std::cout << "Name of malloced zombie:";
	std::getline (std::cin,name_malloc);
}
