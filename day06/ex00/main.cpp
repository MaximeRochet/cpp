/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 18:45:03 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/29 19:09:39 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cmath>

//ceil back setprecision istringstream fixed
//
//aff multiple

bool	isChar(std::string input)
{
	if (input.length() != 1)
		return (0);

	std::cout << std::setprecision(1) << std::fixed;
	char c = input.at(0);
	if (c < 32 || c == 127)
		std::cout << "char: non printable" << std::endl;
	else
		std::cout << "char: " << c << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
	return (1);
}

bool	isInt(std::string input)
{
	if (input.find_first_not_of("-0123456789") != std::string::npos)
		return (0);

	std::cout << std::setprecision(1) << std::fixed;
	int i;
	std::istringstream(input) >> i;
	
	i = 0;
	if (i < 32 || i == 127)
		std::cout << "char: non printable" << std::endl;
	else if (i > 127)
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(i) << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << static_cast<float>(i) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << std::endl;
	return (1);
}

bool	isFloat(std::string input)
{
	if (input.find_first_not_of("-0123456789.f") != std::string::npos || input.back() != 'f')
		return (0);

	float f;
	std::istringstream(input.substr(0, input.length()-1)) >> f;
	if (std::ceil(f) == f)
		std::cout << std::setprecision(1) << std::fixed;
	if (f < 32 || f == 127)
		std::cout << "char: non printable" << std::endl;
	else if (f > 127)
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(f) << std::endl;
	std::cout << "int: " << static_cast<int>(f) << std::endl;
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(f) << std::endl;
	return (1);
}

bool	isDouble(std::string input)
{
	if (input.find_first_not_of("-0123456789.") != std::string::npos)
		return (0);

	double d;
	std::istringstream(input) >> d;

	if (std::ceil(d) == d)
		std::cout << std::setprecision(1) << std::fixed;
	if (d < 32 || d == 127)
		std::cout << "char: non printable" << std::endl;
	else if (d > 127)
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(d) << std::endl;
	std::cout << "int: " << static_cast<int>(d) << std::endl;
	std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
	return (1);
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "usage: ./convert <literal>" << std::endl;
		return (1);
	}
	if (isChar(av[1]) || isInt(av[1]) || isFloat(av[1]) || isDouble(av[1]))
		return (0);

	std::string input(av[1]);
	if (!input.compare("nan") || !input.compare("nanf"))
		std::cout << "char: impossible" << std::endl
			<< "int: impossible" << std::endl
			<< "float: nanf" << std::endl
			<< "double: nan" << std::endl;
	else if (!input.compare("inf") || !input.compare("inff") || !input.compare("+inf") || !input.compare("+inff"))
		std::cout << "char: impossible" << std::endl
			<< "int: inf" << std::endl
			<< "float: inff" << std::endl
			<< "double: inf" << std::endl;
	else if (!input.compare("-inf") || !input.compare("-inff"))
		std::cout << "char: impossible" << std::endl
			<< "int: -inf" << std::endl
			<< "float: -inff" << std::endl
			<< "double: -inf" << std::endl;
	else
		std::cout << "Error: invalid input" << std::endl;
	return (0);
}
