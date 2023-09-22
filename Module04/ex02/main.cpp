/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:39:05 by tserdet           #+#    #+#             */
/*   Updated: 2023/09/22 12:27:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "--------------- Animal ---------------" << std::endl;

    const AAnimal* D = new Dog();
    const AAnimal* C = new Cat();

    std::cout << "D Type: " << D->getType() << " " << std::endl;
    std::cout << "C Type: " << C->getType() << " " << std::endl;
    C->makeSound();
    D->makeSound();

    delete  D;
    delete  C;

    return 0;
}
