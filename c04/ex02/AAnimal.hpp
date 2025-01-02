/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 10:52:58 by trazanad          #+#    #+#             */
/*   Updated: 2025/01/02 08:59:44 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP

# define AANIMAL_HPP

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