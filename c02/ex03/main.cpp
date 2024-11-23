/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 09:38:33 by trazanad          #+#    #+#             */
/*   Updated: 2024/11/23 15:17:10 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) 
{
    bool    is_inside_triangle;
    Point const a(0,0);   
    Point const b(4,0);   
    Point const c(0,3);
    Point const x(0, 1);   

    is_inside_triangle = bsp(a, b, c, x);
    if (is_inside_triangle)
        std::cout << "inside" << std::endl;
    else
        std::cout << "outside" << std::endl;

    return (0);
}
