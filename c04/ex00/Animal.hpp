/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 10:52:58 by trazanad          #+#    #+#             */
/*   Updated: 2024/11/30 11:00:21 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP

# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    protected:
        std::string type;
    public:
        ~Animal( void );
        Animal( void );
        Animal( const Animal & copy);
        Animal & operator=( const Animal & copy);
        virtual void    makeSound();
        //getter
        std::string getType( void ) const;
};

#endif