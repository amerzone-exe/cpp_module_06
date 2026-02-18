/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convertType.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocelyn <jocelyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 08:59:37 by jocelyn           #+#    #+#             */
/*   Updated: 2026/02/18 11:45:15 by jocelyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool	checkLimits( std::string str)
{
	long i = std::atol(str.c_str());
	if (i > INT_MAX || i < INT_MIN)
	{
		std::cout << "int: impossible" << std::endl;
		return true;	
	}
	return false;
}

void	convertChar( std::string str )
{
	char c = static_cast<char>(str[0]);
	std::cout << "char: " << c << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	printFloat(static_cast<float>(c));
	printDouble(static_cast<double>(c));
}

void	convertInt( std::string str )
{

	long i = std::atol(str.c_str());
	if (i < 32 || i > 127)
		std::cout << "char: non printable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(i) << std::endl;
	if (i > INT_MAX || i < INT_MIN)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << i << std::endl;
	printFloat(static_cast<float>(i));
	printDouble(static_cast<double>(i));
}

void	convertFloat( std::string str )
{
	float f = std::strtof(str.c_str(), NULL);
	if (f < 32 || f > 127)
		std::cout << "char: non printable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(f) << std::endl;
	if (!checkLimits(str))
		std::cout << "int: " << static_cast<int>(f) << std::endl;
	printFloat(f);
	printDouble(static_cast<double>(f));
}

void	convertDouble( std::string str )
{
	double d = std::strtod(str.c_str(), NULL);
	if (d < 32 || d > 127)
		std::cout << "char: non printable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(d) << std::endl;
	if (!checkLimits(str))
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	printFloat(static_cast<float>(d));
	printDouble(d);
	// if(d > FLT_MAX || d < -FLT_MAX)
	// {
	// 	std::cout << "float: " << d << std::endl;
	// 	return ;
	// }
}
