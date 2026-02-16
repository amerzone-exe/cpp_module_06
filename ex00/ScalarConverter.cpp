/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocelyn <jocelyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 14:06:14 by amerzone          #+#    #+#             */
/*   Updated: 2026/02/16 12:38:48 by jocelyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cmath>
#include <cstdlib>
#include <iostream>

#define FLT_MAX 3.40282347e+38f
#define FLT_MIN 1.17549435e-38f

ScalarConverter::ScalarConverter()
{
	std::cout << "Default constructor called" << std::endl;
}
ScalarConverter::ScalarConverter( ScalarConverter const & src )
{
	(void)src;
}

ScalarConverter & ScalarConverter::operator=( ScalarConverter const & rightSide ) 
{
	(void)rightSide;
	return *this;
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
	if(str == "-inf" || str == "+inf" || str == "nan")
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

void	ScalarConverter::convert( std::string const & str )
{
	if(str.empty())
	{
		std::cout << "Error : string is empty" << std::endl;
		return ;
	}
	if(isPseudoLiteral(str))
		return ;
	double	s_double = std::strtod(str.c_str(), NULL);
	float	s_float = static_cast<float>(s_double);
	int		s_int = static_cast<int>(s_double);
	char	s_char = static_cast<char>(s_double);
	if (s_char < 32)
		std::cout << "char: non printable" << std::endl;
	else
		std::cout << "char: " << s_char << std::endl;
	std::cout << "int: " << s_int << std::endl;
	if((s_double - std::floor(s_double)) == 0)
	{
		std::cout << "float: " << s_float << ".0f" << std::endl;
		std::cout << "double: " << s_double << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: " << s_float << "f" << std::endl;
		std::cout << "double: " << s_double << std::endl;		
	}
}
