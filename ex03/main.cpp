/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 23:01:20 by amylle            #+#    #+#             */
/*   Updated: 2024/11/26 06:20:04 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include "Fixed.hpp"
#include "point.hpp"

int	main(void)
{
	Point	A(0, 0);
	Point	B(5, 0);
	Point	C(0, 5);
	Point	Test(2, 2);

	std::cout << bsp(A, B, C, Test) << std::endl;
	std::cout << bsp(Point(2, 1), Point(-1, 4), Point(10, 3), Point(10, 3)) << std::endl;
}
