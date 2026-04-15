/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 13:41:25 by rlobun            #+#    #+#             */
/*   Updated: 2026/04/15 14:08:00 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	cross_pr(const Point init, const Point end, const Point point)
{
	Fixed a(end.getY() - init.getY());
	Fixed b(end.getX() - init.getX());
	Fixed c(end.getX()*init.getY() - end.getY()*init.getX());
	return (a*point.getX() - b*point.getY()  + c);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed ab(cross_pr(a,b,point));
	Fixed bc(cross_pr(b,c,point));
	Fixed ca(cross_pr(c,a,point));
	if (ab > 0 && bc > 0 && ca > 0)
		return (true);
	if (ab < 0 && bc < 0 && ca < 0)
		return (true);
	return (false);
}