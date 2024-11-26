/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 04:13:25 by amylle            #+#    #+#             */
/*   Updated: 2024/11/26 06:06:57 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "point.hpp"

Point::Point(): _x(0), _y(0)
{
}

Point::Point(const float x, const float y): _x(x), _y(y)
{
}

Point::Point(const Point& point): _x(point._x), _y(point._y)
{
}

Point::~Point()
{
}

//idk how youre supposed to do this when its _x and _y are supposed to be const
Point&	Point::operator= (const Point& point)
{
	(void) point;
	return (*this);
}

const Fixed&	Point::getX()
{
	return (this->_x);
}

const Fixed&	Point::getY()
{
	return (this->_y);
}
