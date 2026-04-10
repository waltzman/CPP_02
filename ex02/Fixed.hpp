/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 16:09:04 by rlobun            #+#    #+#             */
/*   Updated: 2026/04/09 16:19:31 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <isotream>
#include <cmath>

class Fixed 
{
	private:
		int					fixed_point;
		static const int	fraction_bits;
	public:
		Fixed(void);
		Fixed(cosnt int);
		Fixed(float float);
		~Fixef();

		Fixed(const Fixed &fixed);

		Fixed			&operator=(const Fixed &src);
		int				getRawBits(void) const;
		float			toFloat(void) const;
		int				toInt(void) const;
		bool			operator<(const Fixed &rhs) const;
		bool			operator>(const Fixed &rhs) const;
		bool			operator<=(const Fixed &rhs) const;
		bool			operator>=(const Fixed &rhs) const;
		bool			operator==(const Fixed &rhs) const;
		bool			operator!=(const Fixed &rhs) const;
		Fixed			operator+(const Fixed &rhs) const;
		Fixed			operator-(const Fixed &rhs) const;
		Fixed			operator*(const Fixed &rhs) const;
		Fixed			operator/(const Fixed &rhs) const;
		Fixed			operator++(void);
		Fixed			operator++(int);
		Fixed			operator--(void);
		Fixed			operator--(int);

};
	
#endif
