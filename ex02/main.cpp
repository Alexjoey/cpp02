/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 23:01:20 by amylle            #+#    #+#             */
/*   Updated: 2024/11/03 23:02:11 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include "Fixed.hpp"

int main( void ) {{
Fixed a;
Fixed const b( 10 );
Fixed const c( 42.42f );
Fixed const d( b );
a = Fixed( 1234.4321f );

std::cout << "a is " << a << std::endl;
std::cout << "b is " << b << std::endl;
std::cout << "c is " << c << std::endl;
std::cout << "d is " << d << std::endl;
std::cout << "a is " << a.toInt() << " as integer" << std::endl;
std::cout << "b is " << b.toInt() << " as integer" << std::endl;
std::cout << "c is " << c.toInt() << " as integer" << std::endl;
std::cout << "d is " << d.toInt() << " as integer" << std::endl;}
	Fixed a;
	Fixed b = Fixed(5.05f) * Fixed(2);

	std::cout << a << "\t\tis a at start" << std::endl;
	std::cout << ++a << "\tis a at ++a" << std::endl;
	std::cout << a << "\tis a after ++a" << std::endl;
	std::cout << a++ <<"\tis a at a++" << std::endl;
	std::cout << a << "\tis a after a++" << std::endl;

	std::cout << b << "\t\tvalue of b" << std::endl;

	std::cout << Fixed::max(a, b) << "\t\tthe max of a and b" << std::endl;
	std::cout << Fixed::min(a, b) << "\tthe min of a and b" << std::endl;

	std::cout << "a is: " << a << std::endl;
	std::cout << "b is: " << b << std::endl;
	std::cout << "a + b is: " << a + b << std::endl;
	std::cout << "a - b is: " << a - b << std::endl;
	std::cout << "a * b is: " << a * b << std::endl;
	std::cout << "a / b is: " << a / b << std::endl;
}
