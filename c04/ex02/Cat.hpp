/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 11:18:08 by trazanad          #+#    #+#             */
/*   Updated: 2025/01/02 06:41:04 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP

# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal
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