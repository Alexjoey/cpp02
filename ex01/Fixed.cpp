/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 22:38:55 by amylle            #+#    #+#             */
/*   Updated: 2024/11/03 23:01:10 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <math.h>
const int	Fixed::_fract_bits = 8;

Fixed::Fixed(void) : _raw_bits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy)
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	this->_raw_bits = num << this->_fract_bits;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	this->_raw_bits = roundf(num * (1 << this->_fract_bits));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator= (const Fixed &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_raw_bits = src.getRawBits();
	return (*this);
}


float	Fixed::toFloat(void) const
{
	return ((float)(this->_raw_bits / (float)(1 << this->_fract_bits)));
}

int		Fixed::toInt(void) const
{
	return (this->_raw_bits >> this->_fract_bits);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_raw_bits);
}

void	Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_raw_bits = raw;
}

std::ostream& operator<< (std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return os;
}
