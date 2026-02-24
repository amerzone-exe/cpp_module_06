/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 14:06:14 by amerzone          #+#    #+#             */
/*   Updated: 2026/02/24 14:39:39 by jpiquet          ###   ########.fr       */
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
