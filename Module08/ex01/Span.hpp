/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thib <thib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:44:54 by thib              #+#    #+#             */
/*   Updated: 2023/12/08 13:28:47 by thib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_CLASS_H
# define SPAN_CLASS_H
# include <iostream>
# include <string>
# include <vector>
# include <stdexcept>
# include <algorithm>
# include <limits>
# include <cstddef>

class	Span
{
	public:
		Span(unsigned int N);
		Span(const Span &src);
		Span& operator=(const Span &src);
		~Span();
		void addNumber(int num);
		int longestSpan(void) const;
		int shortestSpan(void) const;
		void addByIteratorRange( std::vector<int>::iterator begin, std::vector<int>::iterator end);
		void randomFill(void);
		void display() const;

	private:
		unsigned int _N;  // Taille maximale de la Span
		std::vector<int> _numbers;  // Vecteur pour stocker les entiers
		void _checkSize() const;
};
#endif
