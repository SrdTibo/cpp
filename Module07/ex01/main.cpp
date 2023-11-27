/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thib <thib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:33:32 by thib              #+#    #+#             */
/*   Updated: 2023/11/27 13:54:45 by thib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main() {
    // Test avec un tableau d'entiers
    int intArray[] = {1, 2, 3, 4, 5};
    iter(intArray, 5, displayElement<int>);
    std::cout << std::endl;

    // Test avec un tableau de caractères
    char charArray[] = {'a', 'b', 'c', 'd', 'e'};
    iter(charArray, 5, displayElement<char>);
	std::cout << std::endl;

	// Test avec un tableau de caractères larges
	wchar_t largeArray[] = { L'A', L'B', L'C', L'D', L'E' };
	iter(largeArray, 5, displayElement<char>);
	std::cout << std::endl;
    return 0;
}
