/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerzone <amerzone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 13:35:14 by amerzone          #+#    #+#             */
/*   Updated: 2026/02/13 14:05:49 by amerzone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER
# define SCALARCONVERTER

# include <string>

class ScalarConverter
{
	public:
		ScalarConverter();
		ScalarConverter( ScalarConverter const & src );
		ScalarConverter & operator=( ScalarConverter const & rightSide );
		~ScalarConverter();

		static void	convert( std::string const & str );
};

#endif