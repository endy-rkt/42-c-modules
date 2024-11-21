/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 09:43:25 by trazanad          #+#    #+#             */
/*   Updated: 2024/11/21 11:02:43 by trazanad         ###   ########.fr       */
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
    return (this->_nbValue);
}

void    Fixed::setRawBits( float const raw )
{
    std::cout << "setRawBits member function called" << std::endl;

    this->_nbValue = static_cast<int>(roundf(raw));
    return ;   
}

void    Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;

    this->_nbValue = raw;
    return ;   
}

Fixed::Fixed( int const nbValue )
{
    std::cout << "Int constructor called" << std::endl;

    this->_nbValue = nbValue << this->_bitValue;
}

Fixed::Fixed( float const nbValue )
{
    int bitValue;

    std::cout << "Float constructor called" << std::endl;

    bitValue = this->_bitValue;   
    this->_nbValue = static_cast<int>(roundf(nbValue * (1 << bitValue)));  
}

float   Fixed::toFloat( void ) const
{
    float   nb;
    int     nbValue;
    int     bitValue;

    nbValue = this->_nbValue;
    bitValue = this->_bitValue;
    nb = static_cast<float>(nbValue) / (1 << bitValue);
    return (nb);
}

int Fixed::toInt( void ) const
{
    int nb;
    int nbValue;
    int bitValue;

    nbValue = this->_nbValue;
    bitValue = this->_bitValue;
    nb = nbValue >> bitValue;
    return (nb);
}

std::ostream & operator<<(std::ostream & o, Fixed const & nb)
{
    o << nb.toFloat();
    return (o);
}
