/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thib <thib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:36:23 by thib              #+#    #+#             */
/*   Updated: 2023/11/27 16:06:28 by thib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_CLASS_H
# define ARRAY_CLASS_H
#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define REDB "\e[41m"
#include <iostream>

class	Array
{
	public:
		Array(): _size(0)
		{
			std::cout<< CYN<< "Default constructor called"<<NC << std::endl;
			this->array = new T[this->_size];
		}

		~Array()
		{
			std::cout<< CYN<< "Default destructor called"<<NC << std::endl;
			if (this->_array != NULL)
				delete [] this->_array;
		}

		unsigned int size() const
		{
			return (this->_size);
		}

		Array(unsigned int n): _size(n)
		{
			td::cout<< CYN<< "Unsigned int constructor called"<<NC << std::endl;
			this->array = new T[this->_size];
		}

		Array& operator=( Array const & hrs)
		{
			if (this->_array != NULL)
				delete [] this->_array;
			else if (this != &hrs)
			{
				this->_size = src.size();
				this->_array = new T[this->_size];
				for (unsigned int i = 0; i < this->size(); i++)
					this->_array[i] = src._array[i];
			}
			return *this;
		}

		Array(Array const & src): _size(src.size())
		{
			std::cout <<CYN<< "Copy Array constructor called" <<NC<< std::endl;
			this->_array = NULL;
			*this = src;
			return;
		}

		class	InvalidIndexException : public std::exception
		{
		public:
			virtual const char	*what() const throw();
		};

		T &operator[]( unsigned int index )
		{
			if (index >= this->_size || this->_array == NULL)
			{
				std::cout << "index: " << index << std::endl;
				throw Array<T>::InvalidIndexException();
			}
			return (this->_array[index]);
		}

	private:
		T 	*_array;
		unsigned int	_size;
};
template< typename T >
const char	*Array<T>::InvalidIndexException::what() const throw()
{
	return ("Index error");
}
#endif
