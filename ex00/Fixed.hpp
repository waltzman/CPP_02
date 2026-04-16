/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 11:01:06 by rlobun            #+#    #+#             */
/*   Updated: 2026/04/16 11:59:04 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed 
{	
	public:
		Fixed();
		Fixed(const Fixed &fixed);
		~Fixed();
		Fixed	&operator=(const Fixed &rhs);
		int		getRawBits() const;
		void	setRawBits(int const raw);
	private:
		int	fixed_point;
		static const int	fractional_bits;
};

#endif
