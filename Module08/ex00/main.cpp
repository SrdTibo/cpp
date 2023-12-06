/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thib <thib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:53:45 by thib              #+#    #+#             */
/*   Updated: 2023/12/06 11:38:52 by thib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
    // Initialisation du vecteur
    int arr[] = {1, 2, 3, 4, 5};
    std::vector<int> numbers(arr, arr + sizeof(arr) / sizeof(arr[0]));

    int searchValue = 3;

    // Déclaration explicite du type pour result
    std::vector<int>::iterator result = easyfind(numbers, searchValue);

    if (result != numbers.end()) {
        std::cout << "La valeur " << searchValue << " a été trouvée à la position : " << std::distance(numbers.begin(), result) << std::endl;
    } else {
        std::cout << "La valeur " << searchValue << " n'a pas été trouvée dans le vecteur." << std::endl;
    }

	searchValue = 10;

	// Déclaration explicite du type pour result
		result = easyfind(numbers, searchValue);

	if (result != numbers.end()) {
		std::cout << "La valeur " << searchValue << " a été trouvée à la position : " << std::distance(numbers.begin(), result) << std::endl;
	} else {
		std::cout << "La valeur " << searchValue << " n'a pas été trouvée dans le vecteur." << std::endl;
	}


    return 0;
}
