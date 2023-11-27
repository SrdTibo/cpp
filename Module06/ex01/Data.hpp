/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thib <thib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:48:35 by thib              #+#    #+#             */
/*   Updated: 2023/11/27 11:49:39 by thib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_CLASS_H
#define DATA_CLASS_H
#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define REDB "\e[41m"
#include <stdint.h>
#include <iostream>
struct Data
{
	std::string name;
	int			number;
};

uintptr_t serialize(Data *ptr);
Data *deserialize(uintptr_t raw);
#endif
