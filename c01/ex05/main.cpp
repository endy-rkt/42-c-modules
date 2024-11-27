/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 08:26:17 by trazanad          #+#    #+#             */
/*   Updated: 2024/11/27 14:56:41 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl test;

    std::cout << "debug:" << std::endl;
    test.complain("DEBUG");
    std::cout << std::endl;

    std::cout << "info:" << std::endl;
    test.complain("INFO");
    std::cout << std::endl;

    std::cout << "warning:" << std::endl;
    test.complain("WARNING");
    std::cout << std::endl;

    std::cout << "error:" << std::endl;
    test.complain("ERROR");
    std::cout << std::endl;

    std::cout << "valgrind:" << std::endl;
    test.complain("valgrind");
    std::cout << std::endl;
    
    return (0);
}
