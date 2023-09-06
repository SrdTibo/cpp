/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 15:21:01 by marvin            #+#    #+#             */
/*   Updated: 2023/09/01 15:21:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H
#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <string>

class	PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook(void);

		void add_contact(void);
		void search_contact(void);

	private:
		Contact	_contact[8];
		int		_cnt;
};

#endif
