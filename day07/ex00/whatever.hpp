/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 01:40:23 by mrochet           #+#    #+#             */
/*   Updated: 2022/07/01 01:49:10 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
void swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;

}

template <typename T>
T max(T &a, T &b)
{
	return (a < b ? b : a);
	
}

template <typename T>
T min(T &a, T &b)
{
	return (a > b ? b : a);
}
