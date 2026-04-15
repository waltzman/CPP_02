/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 13:58:20 by rlobun            #+#    #+#             */
/*   Updated: 2026/04/15 14:00:21 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point {
	private:
		Fixed const _x;
		Fixed const _y;
	public:
		Point();
		Point(Fixed x, Fixed y);
		Point(const int fpx, const int fpy);
		~Point();
		Point(const Point& fixed);
		Fixed getX() const;
		Fixed getY() const;
		Point& operator=(const Point& point);
};

#endif