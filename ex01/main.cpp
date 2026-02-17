/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocelyn <jocelyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 10:28:03 by jocelyn           #+#    #+#             */
/*   Updated: 2026/02/17 11:58:24 by jocelyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int main( void )
{
	Data* a;

	a->data_value = 40;
	// std::cout << "Data* : " << a << std::endl;
	// std::cout << "uintptr_t : " << Serializer::serialize(a) << std::endl;
	Serializer::serialize(a);
	return 0;
}
