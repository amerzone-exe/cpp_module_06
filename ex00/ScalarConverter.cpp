/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocelyn <jocelyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 14:06:14 by amerzone          #+#    #+#             */
/*   Updated: 2026/02/17 11:18:53 by jocelyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <climits>
#include <cfloat>

ScalarConverter::ScalarConverter()
{
	std::cout << "Default constructor called" << std::endl;
}

ScalarConverter::ScalarConverter( ScalarConverter const & src )
{
	(void)src;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "Default destructor called" << std::endl;
}

void	printImpossible()
{
	std::cout << "char: impossible" << std::endl 
	<< "int: impossible" << std::endl;
}

bool isPseudoLiteral( std::string str)
{
	std::string temp = str;
	if(str == "-inf" || str == "+inf" || str == "inf" || str == "nan")
	{
		printImpossible();
		std::cout << "float: " << temp + "f" << std::endl;
		std::cout << "double: " << temp << std::endl;
		return true;
	}
	else if (str == "-inff" || str == "+inff" || str == "nanf")
	{
		printImpossible();
		std::cout << "float: " << temp << std::endl;
		std::cout << "double: " << temp.substr(0, temp.size() - 1) << std::endl;
		return true;		
	}
	else
		return false;
}

bool	isString(std::string str)
{
	int i = 0;

	if(std::isalpha(str[i]) && str[i + 1])
		return true;
	else
		return false;
}

void	printChar( double val )
{
	if (val > 127 && val < 32)
	{
		std::cout << "char: non printable" << std::endl;
		return ;
	}
	char	s_char = static_cast<char>(val);
	std::cout << "char: " << s_char << std::endl;
}

void	printInt( double val )
{	
	if(val > INT_MAX || val < INT_MIN)
	{
		std::cout << "int: non printable" << std::endl;
		return ;
	}
	int		s_int = static_cast<int>(val);
	std::cout << "int: " << s_int << std::endl;
}

void	printFloat( double val )
{
	float	s_float = static_cast<float>(val);
	if(val > FLT_MAX || val < -FLT_MAX)
	{
		std::cout << "float: " << s_float << std::endl;
		return ;
	}
	if((val - std::floor(val)) == 0)
		std::cout << "float: " << s_float << ".0f" << std::endl;
	else
		std::cout << "float: " << s_float << "f" << std::endl;
}

void	printDouble( double val )
{
	if((val - std::floor(val)) == 0)
		std::cout << "double: " << val << ".0" << std::endl;
	else
		std::cout << "double: " << val << std::endl;		
}

void	ScalarConverter::convert( std::string const & str )
{
	if(str.empty())
	{
		std::cout << "Error : string is empty" << std::endl;
		return ;
	}
	if(isPseudoLiteral(str))
		return ;
	if(isString(str))
	{
		std::cout << "Can't convert a string" << std::endl;
		return ;
	}

	double	s_double = std::strtod(str.c_str(), NULL);
	printChar(s_double);
	printInt(s_double);
	printFloat(s_double);
	printDouble(s_double);
}
