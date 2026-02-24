/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   detectType.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 08:31:37 by jocelyn           #+#    #+#             */
/*   Updated: 2026/02/24 14:38:44 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool	isChar( std::string str )
{
	if(str.size() > 1)
		return false;
	if(str[0] >= 32  && !std::isdigit(str[0]))
		return true;
	return false;
}

bool	isInt( std::string str )
{
	if(str.find('.') != str.npos)
		return false;
	return true;
}

bool isFloat( std::string str )
{
	float n = std::atof(str.c_str());
	if(n > FLT_MAX || n < -FLT_MAX)
		return false;
	else
		return true;
}

bool isDouble( std::string str )
{
	float n = std::atof(str.c_str());
	if(n > DBL_MAX || n < -DBL_MAX)
		return false;
	else
		return true;
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
	bool isFloat = false;
	if(str[0] == '-' || str[0] == '+')
		i++;
	while(str[i])
	{
		if (str[i] == '.')
		{
			if (isFloat == true)
				return true;
			isFloat = true;
		}
		if(!std::isdigit(str[i]) && str[i] != '.')
			return true;
		++i;
	}
	return false;
}
