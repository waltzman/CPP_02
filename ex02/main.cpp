/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 13:56:41 by rlobun            #+#    #+#             */
/*   Updated: 2026/04/15 13:28:00 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main (void)
{
	Fixed 	a;
	std::cout << Fixed(5.05f)<< std::endl;
	std::cout << Fixed(2)<< std::endl;
	Fixed 	b(Fixed(5.05f) * Fixed(2));
	std::cout << "Fixed(5.05f)		: " << Fixed(5.05f)<< std::endl;
	std::cout << "Raw bits of 5.05f	: " <<  Fixed(5.05f).getRawBits() << std::endl;
	std::cout << "Raw bits of b		:" << b.getRawBits() << std::endl;
	std::cout << std::endl;
	std::cout << "a:	" << a << std::endl;
	std::cout << "++a:	" << ++a << std::endl;
	std::cout << "a:	" << a << std::endl;
	std::cout << "a++:	" << a++ << std::endl;
	std::cout << "a:	" << a << std::endl;
	std::cout << "b:	" << b << std::endl;
	std::cout << std::endl;
	std::cout << "Max(a,b): " << Fixed::max(a, b) << std::endl;
	std::cout << "Min(a,b): " << Fixed::min(a, b) << std::endl;
	return (0);
}