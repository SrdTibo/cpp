/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thib <thib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:12:19 by thib              #+#    #+#             */
/*   Updated: 2023/11/15 16:22:34 by thib             ###   ########.fr       */
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

class Bureaucrat;

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
		void beSigned(Bureaucrat *b);

		Form &operator=( Form const & hrs);

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};

	private:
		const std::string	_name;
		bool					_isSigned;
		const int			_gradeToSign;
		const int			_gradeToExec;
};
std::ostream	&operator<<(std::ostream &o, Form *a);
#endif
