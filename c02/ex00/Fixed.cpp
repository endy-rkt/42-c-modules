/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 08:26:08 by trazanad          #+#    #+#             */
/*   Updated: 2024/11/19 11:19:24 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const  Fixed::_bitValue = 8;

Fixed::Fixed( void ):_nbValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed( void )
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( const Fixed &copy )
{
    std::cout << "Copy constructor called" << std::endl;
    
    if (this != &copy)
        *this = copy;
    return ;
}

Fixed   & Fixed::operator=(Fixed const & copy)
{
    std::cout << "Copy assignment operator called" << std::endl;

    if (this != &copy)
        this->_nbValue = copy.getRawBits();
    return (*this);
}

int     Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;

    return (this->_nbValue);
}

void    Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;

    this->_nbValue = raw;
    return ;   
}
