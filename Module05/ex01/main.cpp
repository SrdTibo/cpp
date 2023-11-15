/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thib <thib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:29:55 by thib              #+#    #+#             */
/*   Updated: 2023/11/15 11:13:06 by thib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	//COMMENTER BUREAUCRAT 1 PAR 1 POUR TEST
	Bureaucrat *a = new Bureaucrat("thib", 150);
	Bureaucrat *b = new Bureaucrat("oep");
	Bureaucrat *c = new Bureaucrat();
	Bureaucrat *d = new Bureaucrat(160);
	//-----------------------------------------
	std::cout << "Bureaucrat A" << std::endl;
	std::cout << a << std::endl;
	a->decrementGrade(1);
	std::cout << a << std::endl;
	//-----------------------------------------
	std::cout << "Bureaucrat B" << std::endl;
	std::cout << b << std::endl;
	b->incrementGrade(1);
	std::cout << b << std::endl;
	//-----------------------------------------
	std::cout << "Bureaucrat C" << std::endl;
	std::cout << c << std::endl;
	c->incrementGrade(10);
	std::cout << c << std::endl;
	//-----------------------------------------
	std::cout << "Bureaucrat D" << std::endl;
	std::cout << d << std::endl;
	d->incrementGrade(10);
	std::cout << d << std::endl;
	//-----------------------------------------
	delete a;
	delete b;
	delete c;
	delete d;
}
