/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thib <thib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:12:00 by thib              #+#    #+#             */
/*   Updated: 2023/11/27 13:13:33 by thib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_CLASS_H
#define WHATEVER_CLASS_H

template <typename T>
void swap(T &a, T &b) {
	T temp = a;
	a = b;
	b = temp;
}

template <typename T>
T min(const T &a, const T &b) {
	return (b < a) ? b : a;
}

template <typename T>
T max(const T &a, const T &b) {
	return (a < b) ? b : a;
}

#endif
