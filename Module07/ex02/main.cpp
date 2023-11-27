/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thib <thib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:36:24 by thib              #+#    #+#             */
/*   Updated: 2023/11/27 16:12:30 by thib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main() {
    // Test du constructeur par défaut
    Array<int> arrDefault;
    std::cout << "Size of arrDefault: " << arrDefault.size() << std::endl;

    // Test du constructeur avec un nombre donné d'éléments
    Array<int> arrWithSize(5);
    std::cout << "Size of arrWithSize: " << arrWithSize.size() << std::endl;

    // Test de l'opérateur de sous-scripting et modification des éléments
    for (unsigned int i = 0; i < arrWithSize.size(); ++i) {
        arrWithSize[i] = i * 2;
    }

    // Affichage des éléments
    std::cout << "Elements of arrWithSize: ";
    for (unsigned int i = 0; i < arrWithSize.size(); ++i) {
        std::cout << arrWithSize[i] << " ";
    }
    std::cout << std::endl;

    // Test du constructeur par copie
    Array<int> arrCopy(arrWithSize);
    std::cout << "Size of arrCopy: " << arrCopy.size() << std::endl;

    // Modification de l'original et vérification de l'indépendance de la copie
    arrWithSize[0] = 999;

    // Affichage des éléments de la copie
    std::cout << "Elements of arrCopy after modifying the original: ";
    for (unsigned int i = 0; i < arrCopy.size(); ++i) {
        std::cout << arrCopy[i] << " ";
    }
    std::cout << std::endl;

    // Test de l'exception d'indice invalide
    try
	{
        int value = arrWithSize[10];  // L'indice 10 est hors limites
        std::cout << "Value at index 10: " << value << std::endl;
    } catch (const Array<int>::InvalidIndexException &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
