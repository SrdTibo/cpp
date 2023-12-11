/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thib <thib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:44:43 by thib              #+#    #+#             */
/*   Updated: 2023/12/11 13:23:57 by thib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	// Test avec std::vector
	std::vector<int> vec;
	vec.push_back(5);
	vec.push_back(17);
	vec.push_back(3);
	vec.push_back(5);
	vec.push_back(737);
	vec.push_back(0);

	// Crée des itérateurs pour le début et la fin du vecteur
	std::vector<int>::iterator vit = vec.begin();
	std::vector<int>::iterator vite = vec.end();

	while (vit != vite)// Itère sur le vecteur et affiche chaque élément séparé par un espace
	{
		std::cout << *vit << " ";
		++vit;
	}
	std::cout << std::endl;
	return 0;
}
