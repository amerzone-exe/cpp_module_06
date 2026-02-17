/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocelyn <jocelyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 11:03:04 by jocelyn           #+#    #+#             */
/*   Updated: 2026/02/17 11:48:01 by jocelyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
	/*Default constructor*/
}

Serializer::Serializer( Serializer const & src )
{
	(void)src;
}

Serializer::~Serializer()
{
	/*Default destructor*/
}

uintptr_t Serializer::serialize( Data* ptr )
{
	uintptr_t temp = reinterpret_cast<uintptr_t>(ptr);
	return temp;
}

Data* Serializer::deserialize( uintptr_t raw )
{
	Data *ptr = reinterpret_cast<Data*>(raw);
	return ptr;
}
