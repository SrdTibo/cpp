/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thib <thib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:12:19 by thib              #+#    #+#             */
/*   Updated: 2023/11/15 11:18:37 by thib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_CLASS_H
# define FORM_CLASS_H
#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define REDB "\e[41m"
#include <iostream>
#include <string>

class	Form
{
	public:
		Form(void);
		~Form(void);
		Form(const Form &src);
		Form &operator=( Form const & hrs);

	private:
		const std::string _name;
		int _IsSigned;
		const int GradeToSign;
		const int GradeToExec;
};
std::ostream	&operator<<(std::ostream &o, Form *a);
#endif
