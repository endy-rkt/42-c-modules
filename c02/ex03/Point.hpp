/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 09:33:14 by trazanad          #+#    #+#             */
/*   Updated: 2024/11/23 14:47:20 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP

# define POINT_HPP

#include "Fixed.hpp"

class Point
{
    private:
        Fixed const x;
        Fixed const y;
    public:
        ~Point( void );
        Point( void );
        Point( float const x, float const y );
        Point( Point const & point );
        Point & operator=(Point const & point);
        Fixed   getX( void ) const;
        Fixed   getY( void ) const;
};

std::ostream & operator<<(std::ostream & o, Point const & point);
Fixed area( Point const a, Point const b, Point const c);
bool    bsp( Point const a, Point const b, Point const c, Point const point);

#endif