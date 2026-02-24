/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 13:35:14 by amerzone          #+#    #+#             */
/*   Updated: 2026/02/24 14:39:15 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER
# define SCALARCONVERTER

# include <string>
# include <cmath>
# include <cstdlib>
# include <iostream>
# include <climits>
# include <cfloat>

class ScalarConverter
{
	public:
		static void	convert( std::string const & str );

	private:
		ScalarConverter();
		ScalarConverter( ScalarConverter const & src );
		ScalarConverter & operator=( ScalarConverter const & rightSide );
		~ScalarConverter();
};

void	printImpossible();

bool	isChar( std::string str );
bool	isInt( std::string str );
bool 	isFloat( std::string str );
bool 	isDouble( std::string str );
bool	isPseudoLiteral( std::string str);
bool	isString(std::string str);

void	printFloat( float val );
void	printDouble( double val );

void	convertChar( std::string str );
void	convertInt( std::string str );
void	convertFloat( std::string str );
void	convertDouble( std::string str );

#endif