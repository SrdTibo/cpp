/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:23:25 by tserdet           #+#    #+#             */
/*   Updated: 2023/12/15 15:55:22 by tserdet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_CLASS_H
# define PMERGEME_CLASS_H
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
#include <vector>
#include <deque>

class	PmergeMe
{
	public:
		PmergeMe(void);
		PmergeMe(char **arg);
		~PmergeMe(void);
		PmergeMe(const PmergeMe &src);
		PmergeMe &operator=(PmergeMe const & hrs);
		void afficherDeque(void);
		void afficherVector() const;

	private:
		std::vector<int> _vct;
		std::deque<int> _dq;
		bool _parse(char **arg);
		void _fillDq(char **arg);
		void _fillVct(char **arg);
};
#endif
