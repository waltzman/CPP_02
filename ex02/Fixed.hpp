/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 16:09:04 by rlobun            #+#    #+#             */
/*   Updated: 2026/04/13 14:33:39 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed 
{
	private:
		int					fixed_point;
		static const int	fraction_bits;
	public:
		Fixed(void);
		Fixed(const int);
		Fixed(const float fl);
		~Fixed();

		Fixed(const Fixed &fixed);

		Fixed				&operator=(const Fixed &src);
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;
		bool				operator<(const Fixed &rhs) const;
		bool				operator>(const Fixed &rhs) const;
		bool				operator<=(const Fixed &rhs) const;
		bool				operator>=(const Fixed &rhs) const;
		bool				operator==(const Fixed &rhs) const;
		bool				operator!=(const Fixed &rhs) const;
		Fixed				operator+(const Fixed &rhs) const;
		Fixed				operator-(const Fixed &rhs) const;
		Fixed				operator*(const Fixed &rhs) const;
		Fixed				operator/(const Fixed &rhs) const;
		Fixed				operator++(void);
		Fixed				operator++(int);
		Fixed				operator--(void);
		Fixed				operator--(int);

		static Fixed		&min(Fixed &l, Fixed &r);
		static const Fixed	&min(const Fixed &l, const Fixed &r);
		static Fixed		&max(Fixed &l, Fixed &r);
		static const Fixed	&max(const Fixed &l, const Fixed &r);	
	};

	std::ostream &operator<<(std::ostream &out, const Fixed &fxd);
	
#endif
