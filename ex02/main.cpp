/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 11:52:51 by jpiquet           #+#    #+#             */
/*   Updated: 2026/02/24 15:09:20 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <cstdlib>
#include <iostream>

Base*	generate( void )
{
	srand(time(0));
	int val = rand() % 3;

	switch(val)
	{
		case 0 :
			return new A;
		case 1 :
			return new B;
		case 2 :
			return new C;
	}
	return new Base;
}

void	identify( Base * p )
{
	if (A* derivedA = dynamic_cast<A*>(p))
	{
		std::cout << "Actual type of p is : A" << std::endl;
	}
	else if (B* derivedB = dynamic_cast<B*>(p))
	{
		std::cout << "Actual type of p is : B" << std::endl;
	}
	else if (C* derivedC = dynamic_cast<C*>(p))
	{
		std::cout << "Actual type of p is : C" << std::endl;
	}
	else
		std::cout << "unknown type" << std::endl;
}

void	identify( Base & p )
{
	try
	{
		A& derivedA = dynamic_cast<A&>(p);
		std::cout << "Actual type of p is : A | " << &derivedA << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Base to A : " << e.what() << std::endl;
	}

	try
	{
		B& derivedB = dynamic_cast<B&>(p);
		std::cout << "Actual type of p is : B | " << &derivedB << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Base to B : " << e.what() << std::endl;
	}

	try
	{
		C& derivedC = dynamic_cast<C&>(p);
		std::cout << "Actual type of p is : C | " << &derivedC << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Base to C : " << e.what() << std::endl;
	}
}

int main( void )
{
	Base *test = generate();

	std::cout << "Identify by pointer :\n" << std::endl;
	identify(test);
	std::cout << "\n----------------\n" << std::endl;

	std::cout << "Identify by reference :\n" << std::endl;
	identify(*test);

	delete test;

	return 0;
}
