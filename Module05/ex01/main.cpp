/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thib <thib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:29:55 by thib              #+#    #+#             */
/*   Updated: 2023/11/15 16:25:09 by thib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	//COMMENTER BUREAUCRAT 1 PAR 1 POUR TEST
	Bureaucrat *aB = new Bureaucrat("thib", 50);
	Form *aF = new Form("form1", 50, 50);
	std::cout << aF << std::endl;
	std::cout << aB << std::endl;
	aB->signForm(aF);
	std::cout << aF << std::endl;
	delete aF;
	delete aB;
}
