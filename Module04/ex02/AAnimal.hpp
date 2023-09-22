/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:39:39 by tserdet           #+#    #+#             */
/*   Updated: 2023/09/22 12:26:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAANIMAL_CLASS_H
# define AAANIMAL_CLASS_H
#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define REDB "\e[41m"
#include <iostream>
#include <string>

class	AAnimal
{
	public:
		AAnimal(void);
		AAnimal(AAnimal const & src);
		virtual~AAnimal(void);

		AAnimal &operator=( AAnimal const & hrs);
		std::string getType( void ) const;
		virtual void makeSound(void) const = 0;

	protected:
		std::string _type;
};
#endif
