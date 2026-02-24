/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 10:28:03 by jocelyn           #+#    #+#             */
/*   Updated: 2026/02/24 15:02:34 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"
#include <iostream>

int main( void )
{
	Data* a = new Data;
	uintptr_t address;

	a->data_value = 40;
	std::cout << "Data *a address : " << &a << " | value a->: " << a->data_value << std::endl;
	
	/*Serialize*/
	address = Serializer::serialize(a);
	std::cout << "uintptr_t value : " << address << std::endl;

	/*Deserialize*/
	Data* b;
	b = Serializer::deserialize(address);
	std::cout << "Data *b address : " << &a << " | value b->: " << b->data_value << std::endl;

	delete a;

	return 0;
}
