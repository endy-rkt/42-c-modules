/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 09:40:49 by trazanad          #+#    #+#             */
/*   Updated: 2024/11/23 15:11:18 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/*--------------------------------constructor--------------------------------*/

Point::~Point( void )
{
    std::cout << "Destructor called" << std::endl;
}

Point::Point( void ):x(0), y(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Point::Point( float const x, float const y):x(x), y(y)
{
    std::cout << "Float constructor called" << std::endl;
}

Point::Point( Point const & point ):x(point.getX()), y(point.getY())
{
    std::cout << "Copy constructor called" << std::endl;
}

Point & Point::operator=(Point const & point)
{
    std::cout << "Copy assignment operator called" << std::endl;

    if (this != &point)
    {
        const_cast<Fixed&>(this->x) = point.getX();
        const_cast<Fixed&>(this->y) = point.getY();
    }
    return (*this);
}

/*--------------------------------method--------------------------------*/

Fixed   Point::getX( void ) const
{
    return (this->x);
}

Fixed   Point::getY( void ) const
{
    return (this->y);
}

std::ostream & operator<<(std::ostream & o, Point const & point)
{
    o << "(" << point.getX() << "," << point.getY() << ")";
    return (o);
}


