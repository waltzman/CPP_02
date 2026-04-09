/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 11:22:47 by rlobun            #+#    #+#             */
/*   Updated: 2026/04/09 13:28:17 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractional_bits = 8;

Fixed::Fixed() : fixed_point(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int val) : fixed_point(val)
{
	std::cout << "Constructor with parameter called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy contstructor called" << std::endl;
	*this = fixed;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
	}

Fixed& Fixed::operator=(const Fixed& fixed) 
{
	if (this != &fixed) {
		std::cout << "Copy assignment operator called" << std::endl;
		this->fixed_point = fixed.getRawBits();
	}
	return (*this);
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits memeber function called" << std::endl;
	return fixed_point;
}

void Fixed::setRawBits(int const raw) {
	fixed_point = raw;
}
