/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   detectType.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocelyn <jocelyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 08:31:37 by jocelyn           #+#    #+#             */
/*   Updated: 2026/02/18 11:40:58 by jocelyn          ###   ########.fr       */
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
	// long i = std::atol(str.c_str());
	// if (i > INT_MAX || i < INT_MIN)
	// 	return false;
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
	if(n > FLT_MAX || n < -FLT_MAX)
		return false;
	else
		return true;
}
