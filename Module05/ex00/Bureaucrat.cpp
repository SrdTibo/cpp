/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thib <thib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:32:45 by thib              #+#    #+#             */
/*   Updated: 2023/11/14 13:18:31 by thib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
	std::cout <<CYN<< "Default Bureaucrat constructor called" <<NC<< std::endl;
	return;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout <<CYN<< "Default Bureaucrat destructor called" <<NC<< std::endl;
	return;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
	std::cout <<CYN<< "Copy Bureaucrat constructor called" <<NC<< std::endl;
	*this = src;
	return;
}

Bureaucrat::Bureaucrat(int grade)
{
	std::cout <<CYN<< "Default grade Bureaucrat constructor called" <<NC<< std::endl;
	this->_grade = grade;
	return;
}

Bureaucrat::Bureaucrat(const std::string name)
{
	std::cout <<CYN<< "Default name Bureaucrat "<< name <<" constructor called" <<NC<< std::endl;

	return;
}

Bureaucrat::Bureaucrat(const std::string name, int grade)
{
	std::cout <<CYN<< "Default name & grade Bureaucrat "<< name << " constructor called" <<NC<< std::endl;
	this->_grade = grade;
	return;
}

void Bureaucrat::incrementGrade(int i)
{
	this->_grade-=i;
}

void Bureaucrat::decrementGrade(int i)
{
	this->_grade+=i;
}

int Bureaucrat::getGrade()
{
	return(this->_grade);
}

const std::string Bureaucrat::getName()
{
	return(this->_name);
}

Bureaucrat& Bureaucrat::operator=( Bureaucrat const & hrs)
{
	if (this != &hrs)
	{
		this->_grade = hrs.getGrade();
	}
	return *this;
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat *a)
{
	o << "Bureaucrat " << a->getName() << ":\n\tgrade: " << a->getGrade() << std::endl;
	return (o);
}
