/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 09:59:00 by trazanad          #+#    #+#             */
/*   Updated: 2024/11/23 15:16:28 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed area( Point const a, Point const b, Point const c)
{
    Fixed result;
    
    result = (a.getX() * (b.getY() - c.getY()) 
                + b.getX() * (c.getY() - a.getY())
                + c.getX() * (a.getX() - b.getY()))
                / Fixed(2);
    if (result < Fixed(0))
        result = result * Fixed(-1);
    return (result); 
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
   Fixed area0, area1, area2 ,area3;
   Fixed sumArea;

   area0 = area(a, b, c);
   area1 = area(point, b, c);
   area2 = area(a, point, c);
   area3 = area(a, b, point);

    sumArea = area1 + area2 + area3;
    std::cout << area0 << " :area0\n" ;
    std::cout << sumArea << " :areasum\n" ;
    return (area0 == (sumArea));
}
