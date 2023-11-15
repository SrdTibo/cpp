/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thib <thib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:18:48 by thib              #+#    #+#             */
/*   Updated: 2023/11/15 13:15:44 by thib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

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

Form::Form(std::string name, const int gradeToSign, const int _gradeToExec): _name(name), _isSigned(0), _gradeToSign(gradeToSign), _gradeToExec(_gradeToExec)
{
	std::cout <<CYN<< name <<" Form constructor called" <<NC<< std::endl;
	return;
}

const std::string Form::getName()
{
	return(this->_name);
}

int Form::getSigned()
{
	return(this->_isSigned);
}

int Form::getGradeSign()
{
	return(this->_gradeToSign);
}

int Form::getGradeExec()
{
	return(this->_gradeToExec);
}

std::ostream	&operator<<(std::ostream &o, Form *a)
{
	o << "Form " << a->getName() << " is signed: " << a->getSigned()
		<< " grade to sign: " << a->getGradeSign() << " grade to exec: " << a->getGradeExec()<< std::endl;
	return (o);
}
