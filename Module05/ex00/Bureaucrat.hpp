/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thib <thib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:30:09 by thib              #+#    #+#             */
/*   Updated: 2023/11/13 13:26:00 by thib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_CLASS_H
# define BUREAUCRAT_CLASS_H
#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define REDB "\e[41m"
#include <iostream>
#include <string>

class	Bureaucrat
{
	public:
		Bureaucrat(void);
		~Bureaucrat(void);
		Bureaucrat(const Bureaucrat &src);
		Bureaucrat(int grade);
		Bureaucrat(const std::string name);
		Bureaucrat(const std::string name, int grade);

		Bureaucrat &operator=( Bureaucrat const & hrs);

	private:
		strd::string _name;
		int _grade;
};
std::ostream	&operator<<(std::ostream &o, Bureaucrat *a);