/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocelyn <jocelyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 11:23:52 by jocelyn           #+#    #+#             */
/*   Updated: 2026/02/16 12:09:13 by jocelyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>

int main( int ac, char **av )
{
	if (ac != 2)
		return 1;
	std::string str = av[1];

	ScalarConverter::convert(str);

	return 0;
}
