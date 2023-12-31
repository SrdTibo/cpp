/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:39:05 by tserdet           #+#    #+#             */
/*   Updated: 2023/09/22 11:26:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const Animal* animals[8] = { new Dog(), new Dog(), new Dog(), new Dog(), new Cat(), new Cat(), new Cat(), new Cat() };
    for ( int i = 0; i < 8; i++ ) {
        delete animals[i];
    }
    delete j;
    delete i;
    Dog basic;
    {
        Dog tmp = basic;
    }
    return 0;
}
