/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thib <thib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:44:43 by thib              #+#    #+#             */
/*   Updated: 2023/12/08 13:32:26 by thib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	try
	{
		Span sp = Span(20);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		sp.display();
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception : " << e.what() << std::endl;
	}
	try {
		Span s(5);
		std::vector<int>	vect;

		vect.push_back(25);
		vect.push_back(5);
		vect.push_back(12);
		vect.push_back(90);
		vect.push_back(-2);
		s.addByIteratorRange(vect.begin(), vect.end());
		s.display();

	} catch (std::exception& e) {
		std::cerr << "EXCEPTION: " << e.what() << std::endl;
	}
	try {
		Span s(10);
		s.randomFill();
		s.display();
	} catch (std::exception& e) {
		std::cerr << "EXCEPTION: " << e.what() << std::endl;
	}

	return 0;
}
