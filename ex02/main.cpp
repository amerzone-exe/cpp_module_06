/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 11:52:51 by jpiquet           #+#    #+#             */
/*   Updated: 2026/02/23 14:00:44 by jpiquet          ###   ########.fr       */
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
	std::cout << "Val = "<< val << std::endl;

	switch(val)
	{
		case 0 :
			std::cout << "is A" << std::endl;
			return new A;
		case 1 :
			std::cout << "is B" << std::endl;
			return new B;
		case 2 :
			std::cout << "is C" << std::endl;
			return new C;
	}
	return NULL;
}

// void	identify( Base * p )
// {
// 	if (A* derivedA = dynamic_cast<A*>(p))
// 	{
// 		std::cout << "Actual type of p is : A" << std::endl;
// 	}
// 	else if (B* derivedB = dynamic_cast<B*>(p))
// 	{
// 		std::cout << "Actual type of p is : B" << std::endl;
// 	}
// 	else if (C* derivedC = dynamic_cast<C*>(p))
// 	{
// 		std::cout << "Actual type of p is : C" << std::endl;
// 	}
// 	else
// 		std::cout << "unknown type" << std::endl;
// }

void	identify( Base & p )
{
	if (A& derivedA = dynamic_cast<A&>(p))
	{
		std::cout << "Actual type of p is : A" << std::endl;
	}
	else if (B& derivedB = dynamic_cast<B&>(p))
	{
		std::cout << "Actual type of p is : B" << std::endl;
	}
	else if (C& derivedC = dynamic_cast<C&>(p))
	{
		std::cout << "Actual type of p is : C" << std::endl;
	}
	else
		std::cout << "unknown type" << std::endl;
}

int main( void )
{
	Base *test = generate();

	if (!test)
	{
		std::cout << "ERROR" << std::endl;
		return 1;
	}
	identify(test);
}
