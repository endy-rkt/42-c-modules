/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 08:26:17 by trazanad          #+#    #+#             */
/*   Updated: 2024/11/15 09:04:53 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl test;

    std::cout << "debug:" << std::endl;
    test.complain("debug");
    std::cout << std::endl;

    std::cout << "info:" << std::endl;
    test.complain("info");
    std::cout << std::endl;

    std::cout << "warning:" << std::endl;
    test.complain("warning");
    std::cout << std::endl;

    std::cout << "error:" << std::endl;
    test.complain("error");
    std::cout << std::endl;

    std::cout << "valgrind:" << std::endl;
    test.complain("valgrind");
    std::cout << std::endl;
    
    return (0);
}
