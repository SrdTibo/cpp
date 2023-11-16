/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:29:55 by thib              #+#    #+#             */
/*   Updated: 2023/11/16 13:22:45 by tserdet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	Bureaucrat *a = new Bureaucrat(143);
	AForm *b = new ShrubberyCreationForm("QQQ", "file");
	std::cout << b << std::endl;
	std::cout << a << std::endl;
	a->signForm(b);
	b->execute(*a);
	std::cout << b << std::endl;
	delete a;
	delete b;
}
