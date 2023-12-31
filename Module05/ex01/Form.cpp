/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thib <thib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:18:48 by thib              #+#    #+#             */
/*   Updated: 2023/11/29 11:37:10 by thib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void): _name("default"), _isSigned(0), _gradeToSign(150), _gradeToExec(150)
{
	std::cout <<CYN<< "Default Form constructor called" <<NC<< std::endl;
	return;
}

Form::~Form(void)
{
	std::cout <<CYN<< this->_name << " Form destructor called" <<NC<< std::endl;
	return;
}

Form::Form(Form const & src): _name(src.getName()), _isSigned(false), _gradeToSign(src.getGradeSign()), _gradeToExec(src.getGradeExec())
{
	std::cout <<CYN<< "Copy Form constructor called" <<NC<< std::endl;
	*this = src;
	return;
}

Form::Form(std::string name, const int gradeToSign, const int gradeToExec): _name(name), _isSigned(0), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
	std::cout <<CYN<< name <<" Form constructor called" <<NC<< std::endl;
	setGradeToSign(gradeToSign);
	setGradeToExec(gradeToExec);
	return;
}

std::string Form::getName() const
{
	return(this->_name);
}

bool Form::getSigned()
{
	return(this->_isSigned);
}

int Form::getGradeSign() const
{
	return(this->_gradeToSign);
}

int Form::getGradeExec() const
{
	return(this->_gradeToExec);
}

void Form::beSigned(Bureaucrat *b)
{
	if (b->getGrade() <= this->getGradeSign() && b->getGrade() > 0)
	{
		this->_isSigned = 1;
		std::cout << "Bureaucrat " << b->getName() << " signed " << this->getName() << " form" << std::endl;
	}
	else if(b->getGrade() > this->getGradeSign() || b->getGrade() > 150)
	{
		this->_isSigned = 0;
		std::cout << "Bureaucrat " << b->getName() << " couldn't sign " << this->getName() << " form because grade is too low" << std::endl;
		throw Form::GradeTooLowException();
	}
}

void	Form::setGradeToExec(int grade)
{
	if (grade > 150)
		throw Form::GradeTooLowException();
	else if (grade < 1)
		throw Form::GradeTooHighException();
	else
		return;
}

void	Form::setGradeToSign(int grade)
{
	if (grade > 150)
		throw Form::GradeTooLowException();
	else if (grade < 1)
		throw Form::GradeTooHighException();
	else
		return;
}

const char *Form::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low");
};

const char *Form::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high");
};

Form& Form::operator=( Form const & hrs)
{
	std::cout << "Form Assignation operator called" << std::endl;
	if (this == &hrs)
	{
		return *this;
	}
	return *this;
}


std::ostream	&operator<<(std::ostream &o, Form *a)
{
	o << "Form " << a->getName() << ", signed: " << a->getSigned()
		<< ", grade to sign: " << a->getGradeSign() << ", grade to exec: " << a->getGradeExec()<< std::endl;
	return (o);
}
