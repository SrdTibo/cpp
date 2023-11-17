/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thib <thib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:29:55 by thib              #+#    #+#             */
/*   Updated: 2023/11/17 12:39:34 by thib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	Bureaucrat *a = new Bureaucrat(1);
	AForm *b = new ShrubberyCreationForm("QQQ", "file");
	std::cout << b << std::endl;
	std::cout << a << std::endl;
	a->signForm(b);
	b->execute(*a);
	std::cout << b << std::endl;
	delete a;
	delete b;
}
