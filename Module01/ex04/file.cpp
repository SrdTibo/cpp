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
	return;
}

File::~File(void)
{
    return;
}

int File::modifying(std::string filename, std::string s1, std::string s2)
{
	std::string file1;
	std::string file2;
	std::size_t found = 0;
	const char* convertfile = filename.c_str();
	std::ifstream ifs (convertfile);
	std::ofstream ofl((filename + ".replace").c_str());
	if (ifs.is_open() && ofl.is_open())
		std::cout << GRN << "Files opened" << file1 << NC << std::endl;
	else
	{
		std::cout << RED << "Error while opening files" << file1 << NC << std::endl;
		ifs.close();
		ofl.close();
		return 1;
	}
	char c = ifs.get();
	while (ifs.good())
	{
		file1 += c;
		c = ifs.get();
	}
	std::cout << CYN << filename << " = "<< file1 << NC;
	found = file1.find(s1);
	while (found!=std::string::npos)
	{
		file1.erase(found, s1.size());
		file1.insert(found, s2);
		found = file1.find(s1);
	}
	ofl << file1;
	std::cout << CYN << filename << ".replace = "<< file1 << NC;
	ifs.close();
	ofl.close();
	return 0;
}
