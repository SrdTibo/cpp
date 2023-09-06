/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 15:21:01 by marvin            #+#    #+#             */
/*   Updated: 2023/09/06 10:21:25 by tserdet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

class	Contact
{
	public:
		Contact(void);
		~Contact(void);

		int	set(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string dark_secret);

	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;
};

#endif
