/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocelyn <jocelyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 11:13:25 by jocelyn           #+#    #+#             */
/*   Updated: 2026/02/17 12:01:08 by jocelyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <stdint.h>

struct Data
{
	unsigned int data_value;
};

class Serializer
{
	public:
	Serializer( void );
	Serializer( Serializer const & src );
	virtual Serializer & operator=( Serializer const & rightSide ) = 0;	
	~Serializer( void );

	static uintptr_t serialize( Data* ptr);
	static Data* deserialize( uintptr_t raw );
};

#endif