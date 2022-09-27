/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 17:54:56 by mrochet           #+#    #+#             */
/*   Updated: 2022/07/01 18:10:22 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <vector> 
#include <string> 
#include <iostream> 
#include <list> 

class Error_Number_Not_Found: public std::exception
{
	public : 
		const char *what() const throw()
		{
			return("Error: Number not found");
		}
};

template <typename T>
int const &easyfind(T const &container, int const &x)
{
	if(std::find(container.begin(), container.end(), x) == container.end())
	{
		throw Error_Number_Not_Found();
	}
	return(x);
}
