/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 11:18:08 by trazanad          #+#    #+#             */
/*   Updated: 2024/11/30 11:28:34 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP

# define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
    public:
        ~Cat( void );
        Cat( void );
        Cat( const Cat & copy);
        Cat & operator=( const Cat & copy);
        void    makeSound() override;
};

#endif