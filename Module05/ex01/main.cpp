/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:29:55 by thib              #+#    #+#             */
/*   Updated: 2023/11/16 11:31:36 by tserdet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	//COMMENTER BUREAUCRAT 1 PAR 1 POUR TEST
	Bureaucrat *aB = new Bureaucrat("thib", 51);
	Form *aF = new Form("form1", 50, 50);
	std::cout << aF << std::endl;
	std::cout << aB << std::endl;
	aB->signForm(aF);
	std::cout << aF << std::endl;
	delete aF;
	delete aB;
}
