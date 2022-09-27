/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 01:54:40 by mrochet           #+#    #+#             */
/*   Updated: 2022/07/01 15:23:07 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template<class T>
void	iter(T *tab, const int &len, void (*fn)(T &))
{

	for (int i = 0; i < len; i++)
		fn(tab[i]);
}

template<class T>
void	iter(const T *tab, const unsigned int &len, void (*fn)(const T &))
{
	for (unsigned int i = 0; i < len; i++)
		fn(tab[i]);
}
