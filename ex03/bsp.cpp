/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 05:15:22 by amylle            #+#    #+#             */
/*   Updated: 2024/11/26 06:16:53 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "point.hpp"

Fixed	halfSpaceTest(Point start, Point end, Point test)
{
	return ((end.getX() - start.getX()) * (test.getY() - start.getY()) \
			- (end.getY() - start.getY()) * (test.getX() - start.getX()));
}

bool	bsp(const Point a, const Point b, const Point c, const Point point)
{
	Fixed retA, retB, retC;

	retA = halfSpaceTest(a, b, point);
	retB = halfSpaceTest(b, c, point);
	retC = halfSpaceTest(c, a, point);
	if ((retA < 0 && retB < 0 && retC < 0) || (retA > 0 && retB > 0 && retC > 0))
		return (true);
	return (false);
}
