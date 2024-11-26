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
}

Fixed::Fixed(const Fixed& copy)
{
	*this = copy;
}

Fixed::Fixed(const int num)
{
	this->_raw_bits = num << this->_fract_bits;
}

Fixed::Fixed(const float num)
{
	this->_raw_bits = roundf(num * (1 << this->_fract_bits));
}

Fixed::~Fixed(void)
{
}

//operator overloads

//comparisons
bool	Fixed::operator> (const Fixed& Fixed) const
{
	return (this->_raw_bits > Fixed._raw_bits);
}

bool	Fixed::operator>= (const Fixed& Fixed) const
{
	return (this->_raw_bits >= Fixed._raw_bits);
}

bool	Fixed::operator<= (const Fixed& Fixed) const
{
	return (this->_raw_bits <= Fixed._raw_bits);
}

bool	Fixed::operator< (const Fixed& Fixed) const
{
	return (this->_raw_bits < Fixed._raw_bits);
}

bool	Fixed::operator== (const Fixed& Fixed) const
{
	return (this->_raw_bits == Fixed._raw_bits);
}

bool	Fixed::operator!= (const Fixed& Fixed) const
{
	return (this->_raw_bits != Fixed._raw_bits);
}

//arithmetic

Fixed	Fixed::operator+ (const Fixed& fixed) const
{
	Fixed ret;

	ret.setRawBits(this->_raw_bits + fixed._raw_bits);
	return (ret);
}

Fixed	Fixed::operator- (const Fixed& fixed) const
{
	Fixed ret;

	ret.setRawBits(this->_raw_bits - fixed._raw_bits);
	return (ret);
}

Fixed	Fixed::operator* (const Fixed& fixed) const
{
	Fixed ret;

	ret.setRawBits((this->_raw_bits * fixed._raw_bits) >> this->_fract_bits);
	return (ret);
}

Fixed	Fixed::operator/ (const Fixed& fixed) const
{
	Fixed ret;

	ret.setRawBits((this->_raw_bits << this->_fract_bits) / fixed._raw_bits);
	return (ret);
}

Fixed&	Fixed::operator--()
{
	this->_raw_bits--;
	return (*this);
}

Fixed&	Fixed::operator++()
{
	this->_raw_bits++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp = *this;
	this->_raw_bits++;
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp = *this;
	this->_raw_bits--;
	return (tmp);
}

Fixed &Fixed::operator= (const Fixed &src)
{
	this->_raw_bits = src._raw_bits;
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

//min and max

Fixed&	Fixed::min(Fixed& first, Fixed& second)
{
	if (first._raw_bits <= second._raw_bits)
		return (first);
	return (second);
}

Fixed&	Fixed::max(Fixed& first, Fixed& second)
{
	if (first._raw_bits >= second._raw_bits)
		return (first);
	return (second);
}

const Fixed&	Fixed::min(const Fixed& first, const Fixed& second)
{
	if (first._raw_bits <= second._raw_bits)
		return (first);
	return (second);
}

const Fixed&	Fixed::max(const Fixed& first, const Fixed& second)
{
	if (first._raw_bits >= second._raw_bits)
		return (first);
	return (second);
}

int	Fixed::getRawBits(void) const
{
	return (this->_raw_bits);
}

void	Fixed::setRawBits(const int raw)
{
	this->_raw_bits = raw;
}

std::ostream& operator<< (std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return os;
}
