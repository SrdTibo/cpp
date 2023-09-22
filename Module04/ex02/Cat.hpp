/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:42:10 by tserdet           #+#    #+#             */
/*   Updated: 2023/09/22 12:30:05 by marvin           ###   ########.fr       */
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
#include "AAnimal.hpp"
#include "Brain.hpp"

class	Cat : public AAnimal
{
	public:
		Cat(void);
		Cat(std::string name);
		Cat(Cat const & src);
		~Cat(void);

		Cat &operator=( Cat const & hrs);
		void makeSound(void)const;

	private:
		Brain *_brain;
};
#endif
