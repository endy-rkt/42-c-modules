/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 10:52:58 by trazanad          #+#    #+#             */
/*   Updated: 2025/01/02 06:47:51 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP

# define ANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal
{
    protected:
        std::string type;
    public:
        virtual ~AAnimal( void );
        AAnimal( void );
        AAnimal( const std::string & type);
        AAnimal( const AAnimal & copy);
        AAnimal & operator=( const AAnimal & copy);
        virtual void    makeSound( void ) const = 0;
        //getter
        std::string getType( void ) const;
};

#endif