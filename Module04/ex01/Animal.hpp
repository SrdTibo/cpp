/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:39:39 by tserdet           #+#    #+#             */
/*   Updated: 2023/09/21 13:33:15 by tserdet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_H
# define ANIMAL_CLASS_H
#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define REDB "\e[41m"
#include <iostream>
#include <string>

class	Animal
{
	public:
		Animal(void);
		Animal(Animal const & src);
		virtual~Animal(void);

		Animal &operator=( Animal const & hrs);
		std::string getType( void ) const;
		virtual void makeSound(void) const;

	protected:
		std::string _type;
};
#endif
