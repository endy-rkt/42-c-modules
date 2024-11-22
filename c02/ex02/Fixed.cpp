/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 09:43:25 by trazanad          #+#    #+#             */
/*   Updated: 2024/11/22 12:52:55 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const  Fixed::_bitValue = 8;

//---------------------------------------------------constructor---------------------------------------------------

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

Fixed   & Fixed::operator=(Fixed const & copy)
{
    std::cout << "Copy assignment operator called" << std::endl;

    if (this != &copy)
        this->_nbValue = copy.getRawBits();
    return (*this);
}

//---------------------------------------------------method---------------------------------------------------

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

float   Fixed::min( const Fixed & a, const Fixed & b )
{
    float   nb;

    nb = a.getRawBits() < b.getRawBits() ? a.toFloat() : b.toFloat();
    return (nb);    
}

float     Fixed::min( Fixed & a, Fixed & b )
{
    int   nb;

    nb = a.getRawBits() < b.getRawBits() ? a.toInt() : b.toInt();
    return (nb);   
}

float   Fixed::max( const Fixed & a, const Fixed & b )
{
    float   nb;

    nb = a.getRawBits() > b.getRawBits() ? a.toFloat() : b.toFloat();
    return (nb);    
}

float     Fixed::max( Fixed & a, Fixed & b )
{
    int   nb;

    nb = a.getRawBits() > b.getRawBits() ? a.toInt() : b.toInt();
    return (nb);   
}

//---------------------------------------------------operator overload---------------------------------------------------

std::ostream & operator<<(std::ostream & o, Fixed const & nb)
{
    o << nb.toFloat();
    return (o);
}

/*comparaison operator*/

bool    Fixed::operator>(const Fixed & a) const
{
    return (this->getRawBits() > a.getRawBits() ? true : false);
}

bool    Fixed::operator<(const Fixed & a) const
{
    return (this->getRawBits() < a.getRawBits() ? true : false);
}

bool    Fixed::operator>=(const Fixed & a) const
{
    return (this->getRawBits() >= a.getRawBits() ? true : false);
}

bool    Fixed::operator<=(const Fixed & a) const
{
    return (this->getRawBits() <= a.getRawBits() ? true : false);
}

bool    Fixed::operator==(const Fixed & a) const
{
    return (this->getRawBits() == a.getRawBits() ? true : false);
}

bool    Fixed::operator!=(const Fixed & a) const
{
    return (this->getRawBits() != a.getRawBits() ? true : false);
}

/*arithmetic operator*/

Fixed   operator+(const Fixed & a, const Fixed & b)
{
    return (Fixed(a.toFloat() + b.toFloat()));
}

Fixed   operator-(const Fixed & a, const Fixed & b)
{
    return (Fixed(a.toFloat() - b.toFloat()));
}

Fixed    operator*(const Fixed & a, const Fixed & b)
{
    return (Fixed(a.toFloat() * b.toFloat()));
}

Fixed   operator/(const Fixed & a, const Fixed & b)
{
    if (b.getRawBits() != 0)
        return (Fixed(a.toFloat() / b.toFloat()));

    std::cout << "Error division by zero!!!" << std::endl;
    
    if (a.getRawBits() < 0)
        return (Fixed(std::numeric_limits<int>::min() >> 8));
    else
        return (Fixed(std::numeric_limits<int>::max() >> 8));
}

Fixed & Fixed::operator++( void )
{
    float   nbValue;
    Fixed   result;

    nbValue = this->toFloat() + static_cast<float>(1) / 256;
    result = Fixed(nbValue);
    *this = result;
    return (*this);
}

Fixed   Fixed::operator++( int )
{
   float   nbValue;
    Fixed   result = *this;

    nbValue = this->toFloat() + static_cast<float>(1) / 256;
    this->setRawBits(Fixed(nbValue).getRawBits());
    return (result);
}

Fixed & Fixed::operator--( void )
{
    float   nbValue;
    Fixed   result;

    nbValue = this->toFloat() - static_cast<float>(1) / 256;
    result = Fixed(nbValue);
    *this = result;
    return (*this);
}

Fixed   Fixed::operator--( int )
{
    float   nbValue;
    Fixed   result = *this;

    nbValue = this->toFloat() - static_cast<float>(1) / 256;
    this->setRawBits(Fixed(nbValue).getRawBits());
    return (result);
}

