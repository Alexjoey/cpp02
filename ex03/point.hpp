/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 04:07:18 by amylle            #+#    #+#             */
/*   Updated: 2024/11/26 06:12:24 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Fixed.hpp"

class	Point
{

public:
	Point();
	Point(const float x, const float y);
	Point(const Point& copy);
	~Point();

	Point&	operator= (const Point& point);
	const Fixed&	getY();
	const Fixed&	getX();

private:
	const Fixed _x;
	const Fixed _y;

};

Fixed	halfSpaceTest(Point start, Point end, Point test);
bool	bsp(const Point a, const Point b, const Point c, const Point point);
