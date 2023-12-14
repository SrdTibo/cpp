/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 11:52:31 by tserdet           #+#    #+#             */
/*   Updated: 2023/12/14 13:42:38 by tserdet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
	std::cout << CYN << "RPN Default constructor called\n" << NC;

}

RPN::RPN(std::string argument)
{
	std::cout << CYN << "RPN arg constructor called\n" << NC;
	try
	{
		if (checkNumbersBelow10(argument.c_str(), argument.size()))
		{
			evaluateReversePolishNotation(argument);
		}
		else
		{
			throw std::invalid_argument(std::string(RED) + "Invalid input argument\n" + std::string(RED));
		}
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

RPN::~RPN(void)
{
	std::cout << CYN << "RPN Default destructor called\n" << NC;
}

bool RPN::checkNumbersBelow10(const char* expression, int length)
{
	for (int i = 0; i < length; ++i) {
		const char* token = expression + i;

		if (isdigit(token[0]) || (token[0] == '-' && isdigit(token[1]))) {
			int number = atoi(token);

			if (abs(number) >= 10) {
				return false;

			}
		}
		while (i < length && expression[i] != ' ') {
			++i;
		}
	}

	return true;
}

void RPN::evaluateReversePolishNotation(std::string input)
{
	for (size_t i = 0; i < input.size(); i++)
	{
		char c = input[i];

		if (c == ' ')
		{
			continue;
		}
		else if (isdigit(c))
		{
			int number = c - '0';
			_stack.push(number);
		}
		else if (c == '+' && _stack.size() >= 2)
		{
			double b = _stack.top();
			_stack.pop();
			double a = _stack.top();
			_stack.pop();
			_stack.push(a + b);
		}
		else if (c == '-' && _stack.size() >= 2)
		{
			double b = _stack.top();
			_stack.pop();
			double a = _stack.top();
			_stack.pop();
			_stack.push(a - b);
		}
		else if (c == '*' && _stack.size() >= 2)
		{
			double b = _stack.top();
			_stack.pop();
			double a = _stack.top();
			_stack.pop();
			_stack.push(a * b);
		}
		else if (c == '/' && _stack.size() >= 2)
		{
			double b = _stack.top();
			_stack.pop();
			double a = _stack.top();
			_stack.pop();
			_stack.push(a / b);
		}
		else
		{
			throw std::invalid_argument(std::string(RED) + "Invalid input argument\n" + std::string(RED));
			return;
		}
	}

	if (_stack.size() == 1)
	{
		double result = _stack.top();
		_stack.pop();
		std::cout << "Result: " << result << std::endl;
	}
	else
	{
		throw std::invalid_argument(std::string(RED) + "Invalid input argument\n" + std::string(RED));
	}
}
