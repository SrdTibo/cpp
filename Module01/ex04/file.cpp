/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:51:12 by marvin            #+#    #+#             */
/*   Updated: 2023/09/14 10:51:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.hpp"
#include <fstream>

File::File(void)
{
    std::cout << CYN << "File constructor called" << NC << std::endl;
}

File::~File(void)
{
    std::cout << RED << "File destructor called" << NC << std::endl;
}

int File::modifying(std::string filename, std::string s1, std::string s2)
{
	std::string file1;
	(void)s1;
	(void)s2;
	const char* convertfile = filename.c_str();
	std::ifstream ifs (convertfile, std::ifstream::in);
	char c = ifs.get();
	while (ifs.good()) {
		file1 += c;
		c = ifs.get();
	}
	ifs.close();
	
	return 0;
}
