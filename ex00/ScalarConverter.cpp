/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerzone <amerzone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 14:06:14 by amerzone          #+#    #+#             */
/*   Updated: 2026/02/13 15:35:53 by amerzone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>

ScalarConverter::ScalarConverter()
{
	std::cout << "Default constructor called" << std::endl;
}
ScalarConverter::ScalarConverter( ScalarConverter const & src ) {}

ScalarConverter & ScalarConverter::operator=( ScalarConverter const & rightSide ) {}

ScalarConverter::~ScalarConverter()
{
	std::cout << "Default destructor called" << std::endl;
}

bool	isFloat( std::string const & str )
{
	
}

bool	isChar( std::string const & str)
{
	
}

void	ScalarConverter::convert( std::string const & str )
{
	
}