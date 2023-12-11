/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thib <thib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:10:54 by thib              #+#    #+#             */
/*   Updated: 2023/12/11 13:32:07 by thib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANSTACK_CLASS_H
# define MUTANSTACK_CLASS_H
# include <iostream>
# include <string>
# include <vector>

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;

		MutantStack() : std::stack<T>() {}
		MutantStack(const MutantStack& other) : std::stack<T, std::stack<T> >(other) {
			*this = other;
		}
		MutantStack& operator=(const MutantStack& other) {
			if (this == &other) return *this;
			this->std::stack<T, std::stack<T> >::operator=(other);
			return *this;
		}
		~MutantStack() {}

		// Ajouter les itérateurs begin() et end()
		iterator begin() { return std::stack<T>::c.begin(); }
		iterator end() { return std::stack<T>::c.end(); }
};

#endif
