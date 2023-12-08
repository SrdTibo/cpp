/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thib <thib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:45:01 by thib              #+#    #+#             */
/*   Updated: 2023/12/08 13:26:23 by thib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int maxSize) : _N(maxSize)
{
}

Span::~Span(void)
{
}

void Span::addNumber(int num)
{
	if (_numbers.size() >= _N) {
		throw std::out_of_range("Nombre maximal atteint. Impossible d'ajouter plus d'éléments.");
	}
	else
	{
		_numbers.push_back(num);
	}
}

void Span::_checkSize(void) const
{
	if (_numbers.size() <= 1) {
		throw std::logic_error("Il faut au moins deux nombres pour calculer la distance.");
	}
}

int Span::shortestSpan(void) const
{
	_checkSize();
	std::vector<int> sortedNumbers(_numbers);//copie du vecteur
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
	_checkSize();
	int minVal = *std::min_element(_numbers.begin(), _numbers.end());
	int maxVal = *std::max_element(_numbers.begin(), _numbers.end());
	return maxVal - minVal;
}

void Span::addByIteratorRange( std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
		while (begin != end && _numbers.size() < _N) {
		addNumber(*begin);
		++begin;
	}

	if (begin != end) {
		throw std::overflow_error("Erreur : Capacité maximale atteinte avant la fin de la plage d'itérateurs.");
	}
}

void Span::display() const
{
	for (std::vector<int>::const_iterator it = _numbers.begin(); it != _numbers.end(); ++it)
	{
		std::cout << *it << ' ';
	}
	std::cout << std::endl;
}
