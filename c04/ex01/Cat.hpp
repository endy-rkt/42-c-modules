/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 11:18:08 by trazanad          #+#    #+#             */
/*   Updated: 2025/01/02 06:13:54 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP

# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
    private:
        Brain   *brain;
    public:
        ~Cat( void );
        Cat( void );
        Cat( const Cat & copy);
        Cat & operator=( const Cat & copy);
        virtual void    makeSound() const;
        Brain*  getBrain( void ) const;
};

#endif