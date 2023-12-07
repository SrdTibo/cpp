/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thib <thib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:45:01 by thib              #+#    #+#             */
/*   Updated: 2023/12/07 16:34:23 by thib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int maxSize) : N(maxSize)
{
}

Span::~Span(void)
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

void Span::checkSize(void) const
{
	if (numbers.size() <= 1) {
		throw std::logic_error("Il faut au moins deux nombres pour calculer la distance.");
	}
}

int Span::shortestSpan(void) const
{
	checkSize();
	std::vector<int> sortedNumbers(numbers);//copie du vecteur
	std::sort(sortedNumbers.begin(), sortedNumbers.end());//tri du vecteur copié

	int minSpan = std::numeric_limits<int>::max();
	for (size_t i = 1; i < sortedNumbers.size(); ++i)
	{
		int span = sortedNumbers[i] - sortedNumbers[i - 1];//soustrait N+1 par N
		minSpan = std::min(minSpan, span);//remplace la valeur si span est plus petit que la valeur actuelle
	}

	return minSpan;
}

int Span::longestSpan(void) const
{
	checkSize();
	int minVal = *std::min_element(numbers.begin(), numbers.end());
	int maxVal = *std::max_element(numbers.begin(), numbers.end());
	return maxVal - minVal;
}
