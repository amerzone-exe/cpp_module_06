/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 11:13:25 by jocelyn           #+#    #+#             */
/*   Updated: 2026/02/24 15:00:18 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <stdint.h>
#include "Data.hpp"

class Serializer
{
	public:
	
	static uintptr_t serialize( Data* ptr);
	static Data* deserialize( uintptr_t raw );

	private:

	Serializer( void );
	Serializer( Serializer const & src );
	Serializer & operator=( Serializer const & rightSide );
	~Serializer( void );
};

#endif