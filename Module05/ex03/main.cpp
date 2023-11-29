/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thib <thib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:29:55 by thib              #+#    #+#             */
/*   Updated: 2023/11/29 11:55:59 by thib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	std::cout << GRN << "----------------SHRUBBERY TEST-------------" << NC << std::endl;
	Bureaucrat *a = new Bureaucrat(1);
	Intern *g = new Intern();
	AForm *h = g->makeForm("PresidentialPardonForm", "Bender");
	if (h)
		a->signForm(h);
	h->execute(*a);
	delete a;
	delete g;
}
