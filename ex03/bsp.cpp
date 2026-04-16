/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 13:41:25 by rlobun            #+#    #+#             */
/*   Updated: 2026/04/16 13:26:44 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	cross_pr(const Point init, const Point end, const Point point)
{
	Fixed a((end.getX() - init.getX()) * (point.getY() - init.getY()));
	Fixed b((end.getY() - init.getY()) * (point.getX() - init.getX()));
	return (a-b);

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
