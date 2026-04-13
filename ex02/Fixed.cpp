/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 13:32:53 by rlobun            #+#    #+#             */
/*   Updated: 2026/04/13 14:51:59 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>
#include <iostream>

static const int fractional_bits = 8;

Fixed::Fixed(void) : fixed_point(0)
{
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int i)
{
	//std::cout << "Int constructor called" << std::endl;
	this->fixed_point = i * (1 << fractional_bits);
}

Fixed::Fixed(const float fl)
{
	//std::cout << "Float constructor called" << std::endl;
	this->fixed_point = (int)roundf(fl*(1<<fractional_bits)); 
}

Fixed::~Fixed(void)
{
	//std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy)
{
	this->fixed_point = copy.getRawBits();
	//std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& copy)
{
	if (this != &copy) {
		//std::cout << "Copy assignment operator called" << std::endl;
		this->fixed_point = copy.getRawBits();
	}
	return (*this);
}

float Fixed::toFloat(void) const
{
	return  ((float( this->fixed_point) / float (1 << fractional_bits)));
}

int Fixed::toInt(void) const
{	
	return (this->fixed_point >> fractional_bits);
}

std::ostream& operator<<(std::ostream& out, const Fixed& fxd)
{
	out << fxd.toFloat();
	return (out);
}

int Fixed::getRawBits(void) const
{
	return (this->fixed_point);
}

void Fixed::setRawBits(int const raw)
{
	this->fixed_point = raw;
}

bool Fixed::operator<(const Fixed &rhs) const
{
	return (this->fixed_point < rhs.fixed_point);
}

bool Fixed::operator>(const Fixed &rhs) const
{
	return (this->fixed_point > rhs.fixed_point);
}

bool Fixed::operator<=(const Fixed &rhs) const
{
	return (this->fixed_point <= rhs.fixed_point);
}

bool Fixed::operator>=(const Fixed &rhs) const
{
	return (this->fixed_point >= rhs.fixed_point);
}

bool Fixed::operator==(const Fixed &rhs) const
{
	return (this->fixed_point == rhs.fixed_point);
}

bool Fixed::operator!=(const Fixed &rhs) const
{
	return (this->fixed_point != rhs.fixed_point);
}

Fixed Fixed::operator+(const Fixed &rhs) const
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed Fixed::operator-(const Fixed &rhs) const
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed Fixed::operator*(const Fixed &rhs) const
{	
	Fixed result;

	long long temp = (long long)this->fixed_point * rhs.fixed_point;
	result.setRawBits((int)(temp >> fractional_bits));
	return (result);
}

Fixed Fixed::operator/(const Fixed &rhs) const
{
	Fixed result;

	if (rhs.fixed_point == 0) {
		std::cerr << "Error: Division by zero" << std::endl;
		return (result);
	}

	long long temp = ((long long)this->fixed_point << fractional_bits) / rhs.fixed_point;
	result.setRawBits((int)temp);
	return (result);
}

Fixed Fixed::operator++(void)
{
	this->fixed_point++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	operator++();
	return (temp);
}

Fixed Fixed::operator--(void)
{
	this->fixed_point--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	operator--();
	return (temp);
}

Fixed	&Fixed::min(Fixed &l, Fixed &r)
{
	return (l < r ? l : r );
}

const Fixed	&Fixed::min(const Fixed &l, const Fixed &r)
{
	return (l < r ? l : r );
}

Fixed	&Fixed::max(Fixed &l, Fixed &r)
{
	return (l > r ? l : r );
}

const Fixed	&Fixed::max(const Fixed &l, const Fixed &r)
{
	return (l > r ? l : r );
}