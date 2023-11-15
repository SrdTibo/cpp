/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thib <thib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:29:55 by thib              #+#    #+#             */
/*   Updated: 2023/11/15 13:14:08 by thib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	//COMMENTER BUREAUCRAT 1 PAR 1 POUR TEST
	Form *a = new Form();
	std::cout << a << std::endl;
	delete a;
}
