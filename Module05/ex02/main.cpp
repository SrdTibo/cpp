/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thib <thib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:29:55 by thib              #+#    #+#             */
/*   Updated: 2023/11/17 13:14:17 by thib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	std::cout << GRN << "----------------SHRUBBERY TEST-------------" << NC << std::endl;
	Bureaucrat *a = new Bureaucrat(1);
	AForm *b = new ShrubberyCreationForm("SHRUBBERY", "file");
	std::cout << b << std::endl;
	std::cout << a << std::endl;
	a->signForm(b);
	b->execute(*a);
	std::cout << b << std::endl;
	std::cout << GRN<<"----------------ROBOTOMY TEST-------------" <<NC<< std::endl;
	Bureaucrat *c = new Bureaucrat(1);
	AForm *d = new RobotomyRequestForm("ROBOTOMY", "Popeye");
	std::cout << d << std::endl;
	std::cout << c << std::endl;
	c->signForm(d);
	d->execute(*c);
	d->execute(*c);
	d->execute(*c);
	d->execute(*c);
	std::cout << d << std::endl;
	delete a;
	delete b;
	delete c;
	delete d;
}
