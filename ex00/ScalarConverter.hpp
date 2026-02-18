/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocelyn <jocelyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 13:35:14 by amerzone          #+#    #+#             */
/*   Updated: 2026/02/18 11:15:53 by jocelyn          ###   ########.fr       */
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

# define ERROR std::cout << "error" << std::endl;

enum type
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE
};

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

bool	isChar( std::string str );
bool	isInt( std::string str );
bool 	isFloat( std::string str );
bool 	isDouble( std::string str );

void	printFloat( float val );
void	printDouble( double val );

void	convertChar( std::string str );
void	convertInt( std::string str );
void	convertFloat( std::string str );
void	convertDouble( std::string str );


#endif