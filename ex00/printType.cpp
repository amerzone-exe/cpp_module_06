/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printType.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocelyn <jocelyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 09:04:33 by jocelyn           #+#    #+#             */
/*   Updated: 2026/02/18 10:31:55 by jocelyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void	printFloat( float val )
{

	if((val - std::floor(val)) == 0)
		std::cout << "float: " << val << ".0f" << std::endl;
	else
		std::cout << "float: " << val << "f" << std::endl;
}

void	printDouble( double val )
{
	if((val - std::floor(val)) == 0)
		std::cout << "double: " << val << ".0" << std::endl;
	else
		std::cout << "double: " << val << std::endl;
}
