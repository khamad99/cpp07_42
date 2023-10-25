/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalshaer <kalshaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:45:47 by kalshaer          #+#    #+#             */
/*   Updated: 2023/10/25 13:41:13 by kalshaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void iter(T *arr, size_t len, void (*f)(T const &))
{
	for (size_t i = 0; i < len; i++)
		f(arr[i]);
}

template <typename T>
void print(T const &x)
{
	std::cout << x << std::endl;
}

#endif