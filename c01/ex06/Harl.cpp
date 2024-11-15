/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 08:26:08 by trazanad          #+#    #+#             */
/*   Updated: 2024/11/15 09:12:41 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}


void Harl::complain( std::string level )
{
    std::map<std::string, void (Harl::*)()> myMap;
    myMap["DEBUG"] = &Harl::debug;
    myMap["INFO"] = &Harl::info;
    myMap["WARNING"] = &Harl::warning;
    myMap["ERROR"] = &Harl::error;

    if (myMap.find(level) != myMap.end()) 
    {
        (this->*myMap[level])();
    } else 
    {
        std::cout << "Unknown level: " << level << std::endl;
    }
}
