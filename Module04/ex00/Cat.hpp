/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:42:10 by tserdet           #+#    #+#             */
/*   Updated: 2023/09/21 13:36:20 by tserdet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_H
# define CAT_CLASS_H
#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define REDB "\e[41m"
#include <iostream>
#include <string>
#include "Animal.hpp"

class	Cat : public Animal
{
	public:
		Cat(void);
		Cat(std::string name);
		Cat(Cat const & src);
		~Cat(void);

		Cat &operator=( Cat const & hrs);
		void makeSound(void)const;
};
#endif
