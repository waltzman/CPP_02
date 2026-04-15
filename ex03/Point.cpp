/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 13:59:26 by rlobun            #+#    #+#             */
/*   Updated: 2026/04/15 13:59:38 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0){

}

Point::Point(Fixed x, Fixed y): _x(x), _y(y){

}
Point::Point(const int fpx, const int fpy): _x(Fixed(fpx)), _y(Fixed(fpy)) {
}
Point::~Point(){

}

Point::Point(const Point& point): _x(point.getX()) , _y(point.getY()){

}

Point& Point::operator=(const Point& point){
	if (this == &point)
		return *this;
	return *this;
}

Fixed Point::getX() const {
	return (_x);
}

Fixed Point::getY() const{
	return (_y);
}