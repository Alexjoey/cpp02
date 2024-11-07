/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 22:24:49 by amylle            #+#    #+#             */
/*   Updated: 2024/11/03 22:52:04 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed
{

private:
	int					_raw_bits;
	static const int	_fract_bits;

public:
	Fixed();
	Fixed(const Fixed& copy);
	Fixed(const int num);
	Fixed(const float num);
	~Fixed();

	float	toFloat(void) const;
	int		toInt(void) const;

	Fixed&	operator= (const Fixed& Fixed);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

};

std::ostream& operator<< (std::ostream& os, const Fixed& fixed);
#endif
