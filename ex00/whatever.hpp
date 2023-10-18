/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalshaer <kalshaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:19:38 by kalshaer          #+#    #+#             */
/*   Updated: 2023/10/17 11:48:58 by kalshaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T>
void	swap(T & a, T & b)
{
	T tmp;
	
	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T		min(T const & a, T const & b)
{
	if (a == b)
		return (b);
	return (a < b ? a : b);
}

template <typename T>
T		max(T const & a, T const & b)
{
	if (a == b)
		return (b);
	return (a > b ? a : b);
}

#endif