/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thib <thib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:32:45 by thib              #+#    #+#             */
/*   Updated: 2023/11/14 16:09:11 by thib             ###   ########.fr       */
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

Bureaucrat::Bureaucrat(int grade) : _name("default")
{
	std::cout <<CYN<< "Default grade Bureaucrat constructor called" <<NC<< std::endl;
	this->_grade = grade;
	return;
}

Bureaucrat::Bureaucrat(const std::string name) : _name(name), _grade(150)
{
	std::cout <<CYN<< name << " name Bureaucrat constructor called" <<NC<< std::endl;
	return;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
	std::cout <<CYN<< name << " name & grade Bureaucrat "<< name << " constructor called" <<NC<< std::endl;
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

int Bureaucrat::getGrade() const
{
	return(this->_grade);
}

std::string Bureaucrat::getName() const
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
	o << "Bureaucrat " << a->getName() << " grade: " << a->getGrade() << std::endl;
	return (o);
}
