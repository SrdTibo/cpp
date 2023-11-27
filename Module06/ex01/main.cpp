/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thib <thib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:48:36 by thib              #+#    #+#             */
/*   Updated: 2023/11/27 12:00:27 by thib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main()
{
	Data *data = new Data;
	data->name = "Thib";
	data->number = 42;

	uintptr_t data_ptr = serialize(data);
	std::cout << "Serialize 		:" << data_ptr << std::endl;
	Data *data_dese = deserialize(data_ptr);
	std::cout << "Deserialize			:" << data_dese << std::endl;
	std::cout << "Deserialize			:" << data_dese->name << std::endl;
	std::cout << "Deserialize			:" << data_dese->number << std::endl;
}
