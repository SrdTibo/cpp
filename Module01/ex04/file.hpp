/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:49:56 by marvin            #+#    #+#             */
/*   Updated: 2023/09/14 10:49:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FILE_CLASS_H
# define FILE_CLASS_H
#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define REDB "\e[41m"
#include <iostream>
#include <string>
#include <fstream>

class	File
{
	public:
		File(void);
		~File(void);
		int modifying(std::string filename, std::string s1, std::string s2);
};

#endif
