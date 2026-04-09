/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 13:47:05 by rlobun            #+#    #+#             */
/*   Updated: 2026/04/09 15:59:53 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>
#include <iostream>

const int Fixed::fractional_bits = 8;

Fixed::Fixed(void) : fixed_point(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
	fixed_point = i * (1 << fractional_bits);
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	fixed_point = (int)roundf(f*(1<<fractional_bits)); 
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fixed)
{
	// otra forma:
	*this = fixed.fractional_bits;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
	if (this != &fixed) {
		std::cout << "Copy assignment operator called" << std::endl;
		this->fixed_point = fixed.fixed_point;
	}
	return (*this);
}

float Fixed::toFloat(void) const
{
	return (float)this->fixed_point/(1 << this->fractional_bits);
}

int Fixed::toInt(void) const
{	
	return (this->fixed_point >> this->fractional_bits);
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return (out);
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (fixed_point);
}

