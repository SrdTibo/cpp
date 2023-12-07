/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thib <thib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:45:01 by thib              #+#    #+#             */
/*   Updated: 2023/12/07 15:35:31 by thib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int maxSize) : N(maxSize)
{
}

Span::~Span()
{
}

void Span::addNumber(int num)
{
	if (numbers.size() >= N) {
		throw std::out_of_range("Nombre maximal atteint. Impossible d'ajouter plus d'éléments.");
	}
	else
	{
		numbers.push_back(num);
	}
}

