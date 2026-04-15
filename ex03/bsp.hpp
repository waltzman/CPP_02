/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 14:39:21 by rlobun            #+#    #+#             */
/*   Updated: 2026/04/15 14:39:59 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSP_HPP
#define BSP_HPP
#include "Point.hpp"

Fixed	cross_pr(const Point init, const Point end, const Point point);
bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif