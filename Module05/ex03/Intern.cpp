/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thib <thib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:23:10 by thib              #+#    #+#             */
/*   Updated: 2023/11/17 14:49:41 by thib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout <<CYN<< "Default Intern constructor called" <<NC<< std::endl;
	return;
}

Intern::~Intern(void)
{
	std::cout <<CYN<<"Intern destructor called" <<NC<< std::endl;
	return;
}

Intern::Intern(Intern const & src)
{
	std::cout <<CYN<< "Copy Intern constructor called" <<NC<< std::endl;
	*this = src;
	return;
}

AForm *Intern::makeForm(std::string name, std::string target)
{
	AForm *(*all_forms[])(const std::string target) = {&makePresident, &makeRobot, &makeShrubbery};
	std::string forms[] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};

	for (int i = 0; i < 3; i++)
	{
		if (name == forms[i])
		{
			std::cout << "Intern creates " << name << " now" << std::endl;
			return (all_forms[i](target));
		}
	}

	std::cout << "\033[33mIntern can not create a form called " << name << "\033[0m" << std::endl;
	return (NULL);
}

Intern& Intern::operator=( Intern const & hrs)
{
	std::cout << "Intern Assignation operator called" << std::endl;
	if (this == &hrs)
	{
		return *this;
	}
	return *this;
}
