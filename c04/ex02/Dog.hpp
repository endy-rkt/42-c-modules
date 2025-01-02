/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 15:30:25 by trazanad          #+#    #+#             */
/*   Updated: 2025/01/02 06:41:22 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP

# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal
{
    private:
        Brain   *brain;
    public:
        ~Dog( void );
        Dog( void );
        Dog( const Dog & copy);
        Dog & operator=( const Dog & copy);
        virtual void    makeSound() const;
        Brain*  getBrain( void ) const;
};

#endif