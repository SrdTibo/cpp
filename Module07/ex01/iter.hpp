/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thib <thib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:33:52 by thib              #+#    #+#             */
/*   Updated: 2023/11/27 13:42:40 by thib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_CLASS_H
#define ITER_CLASS_H
#include <iostream>

template <typename T, typename Func>
void iter(T *array, size_t length, Func function)
{
	if (array == NULL)
		return ;
	for (size_t i = 0; i < length; i++)
		function(array[i]);
}

template <typename T>
void displayElement(const T &element) {
	std::cout << element << " ";
}

#endif
