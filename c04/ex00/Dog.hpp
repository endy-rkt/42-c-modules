/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 15:30:25 by trazanad          #+#    #+#             */
/*   Updated: 2025/01/02 04:44:45 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP

# define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
    public:
        ~Dog( void );
        Dog( void );
        Dog( const Dog & copy);
        Dog & operator=( const Dog & copy);
        virtual void    makeSound() const;
};

#endif