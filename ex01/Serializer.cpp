/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 11:03:04 by jocelyn           #+#    #+#             */
/*   Updated: 2026/02/23 11:23:18 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"

Serializer::Serializer()
{
	/*Default constructor*/
}

Serializer::Serializer( Serializer const & src )
{
	(void)src;
}


Serializer & Serializer::operator=( Serializer const & rightSide )
{
	(void)rightSide;
	return *this;
}

Serializer::~Serializer()
{
	/*Default destructor*/
}

uintptr_t Serializer::serialize( Data* ptr )
{	
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize( uintptr_t raw )
{
	return reinterpret_cast<Data*>(raw);
}
