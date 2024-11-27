/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 08:26:08 by trazanad          #+#    #+#             */
/*   Updated: 2024/11/27 14:57:49 by trazanad         ###   ########.fr       */
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
    Harl harl;
    int i;
    
    s_harl harlStruct[] = {
        {"DEBUG", &Harl::debug},
        {"INFO", &Harl::info},
        {"WARNING", &Harl::warning},
        {"ERROR", &Harl::error}
    };
   for (i = 0; i < 4; i++)
   {
        if (level == harlStruct[i].type)
        {
             (harl.*(harlStruct[i].complainFunction))();
             return ;
        }
   }
   if (i == 4)
    std::cout << "Probably complaining about insignificant problems" << std::endl;
}
