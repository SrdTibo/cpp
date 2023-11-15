/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thib <thib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:12:19 by thib              #+#    #+#             */
/*   Updated: 2023/11/15 13:36:21 by thib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_CLASS_H
# define FORM_CLASS_H
#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define REDB "\e[41m"
#include "Bureaucrat.hpp"
class	Form
{
	public:
		Form(void);
		Form(std::string name, const int gradeToSign, const int _gradeToExec);
		~Form(void);
		Form(const Form &src);

		std::string getName() const;
		bool getSigned();
		int getGradeSign() const;
		int getGradeExec() const;

		Form &operator=( Form const & hrs);

	private:
		const std::string	_name;
		bool					_isSigned;
		const int			_gradeToSign;
		const int			_gradeToExec;
};
std::ostream	&operator<<(std::ostream &o, Form *a);
#endif
