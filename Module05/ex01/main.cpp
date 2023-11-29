/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thib <thib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:29:55 by thib              #+#    #+#             */
/*   Updated: 2023/11/29 11:39:18 by thib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	//COMMENTER BUREAUCRAT 1 PAR 1 POUR TEST
	Bureaucrat *aB = new Bureaucrat("thib", 51);
	Form *aF = new Form("form1", 51, 50);
	std::cout << aF << std::endl;
	std::cout << aB << std::endl;
	aB->signForm(aF);
	std::cout << aF << std::endl;
	delete aF;
	delete aB;
}
