/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   From.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thib <thib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:18:48 by thib              #+#    #+#             */
/*   Updated: 2023/11/15 11:24:00 by thib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "form.hpp"
#include "Bureaicrat.hpp"

Form::Form(void)
{
	std::cout <<CYN<< "Default Form constructor called" <<NC<< std::endl;
	setGrade(150);
	return;
}


/* std::ostream	&operator<<(std::ostream &o, Bureaucrat *a)
{
	o << "Bureaucrat " << a->getName() << " grade: " << a->getGrade() << std::endl;
	return (o);
} */
