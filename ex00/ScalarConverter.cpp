/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 14:06:14 by amerzone          #+#    #+#             */
/*   Updated: 2026/02/23 11:36:15 by jpiquet          ###   ########.fr       */
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
	if(str == "-inf" || str == "+inf" || str == "inf" || str == "nan")
	{
		printImpossible();
		std::cout << "float: " << temp + "f" << std::endl;
		std::cout << "double: " << temp << std::endl;
		return true;
	}
	else if (str == "-inff" || str == "+inff" || str == "inff" || str == "nanf")
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
	if (str.size() <= 1)
		return false;
	int i = 0;
	while(str[i])
	{
		if(!std::isdigit(str[i]) && str[i] != '.' && str[0] != '-' && str[0] != '+')
			return true;
		++i;
	}
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
	if(isString(str))
	{
		std::cout << "Error: can't convert a string" << std::endl;
		return ;
	}
	if(isChar(str))
		convertChar(str);
	else if(isInt(str))
		convertInt(str);
	else if(isFloat(str))
		convertFloat(str);
	else if(isDouble(str))
		convertDouble(str);
	else
		std::cout << "Error: unknown type" << std::endl;
}
