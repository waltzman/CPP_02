/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 13:56:41 by rlobun            #+#    #+#             */
/*   Updated: 2026/04/15 14:40:23 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "bsp.hpp"

int main(void)
{
	Point const	a( Fixed(0) , Fixed(0) );
	Point const	b( Fixed(10) , Fixed(0) );
	Point const	c( Fixed(5) , Fixed(4) );
	Point const	o( Fixed(5) , Fixed(3) );

	if (bsp(a, b, c, o))
		std::cout << "The point is inside a triangle" << std::endl;
	else
		std::cout << "The point is not inside a triangle" << std::endl;


	Point const	p( Fixed(0) , Fixed(2) );

	if (bsp(a, b, c, p))
		std::cout << "The point is inside a triangle" << std::endl;
	else
		std::cout << "The point is not inside a triangle" << std::endl;
	return 0;
}