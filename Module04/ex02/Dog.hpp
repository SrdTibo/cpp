/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:41:23 by tserdet           #+#    #+#             */
/*   Updated: 2023/09/22 12:30:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_H
# define DOG_CLASS_H
#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define REDB "\e[41m"
#include <iostream>
#include <string>
#include "AAnimal.hpp"
#include "Brain.hpp"

class	Dog : public AAnimal
{
	public:
		Dog(void);
		Dog(std::string name);
		Dog(Dog const & src);
		~Dog(void);

		Dog &operator=( Dog const & hrs);
		void makeSound(void) const;

	private:
		Brain *_brain;
};
#endif
