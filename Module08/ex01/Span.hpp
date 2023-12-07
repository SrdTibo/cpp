/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thib <thib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:44:54 by thib              #+#    #+#             */
/*   Updated: 2023/12/07 15:29:35 by thib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_CLASS_H
# define SPAN_CLASS_H
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

class	Span
{
	public:
		Span(unsigned int N);
		Span(const Span &src);
		Span& operator=(const Span &src);
		~Span();
		void addNumber(int num);

	private:
		unsigned int N;  // Taille maximale de la Span
		std::vector<int> numbers;  // Vecteur pour stocker les entiers
};
#endif
