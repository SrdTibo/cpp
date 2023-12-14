/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 11:52:34 by tserdet           #+#    #+#             */
/*   Updated: 2023/12/14 13:40:44 by tserdet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_CLASS_H
# define RPN_CLASS_H
#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define REDB "\e[41m"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <string>
#include <cstdlib>
#include <stack>

class	RPN
{
	public:
		RPN(void);
		RPN(std::string argument);
		~RPN(void);
		RPN(const RPN &src);
		RPN &operator=( RPN const & hrs);
		void evaluateReversePolishNotation(std::string input);
		bool checkNumbersBelow10(const char* expression, int length);

	private:
		std::stack<double> _stack;
};
#endif
