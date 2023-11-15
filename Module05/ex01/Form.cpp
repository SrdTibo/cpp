/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thib <thib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:18:48 by thib              #+#    #+#             */
/*   Updated: 2023/11/15 11:40:21 by thib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void): _name("default"), _IsSigned(0), _GradeToSign(150), _GradeToExec(150)
{
	std::cout <<CYN<< "Default Form constructor called" <<NC<< std::endl;
	return;
}


/* std::ostream	&operator<<(std::ostream &o, Bureaucrat *a)
{
	o << "Bureaucrat " << a->getName() << " grade: " << a->getGrade() << std::endl;
	return (o);
} */
