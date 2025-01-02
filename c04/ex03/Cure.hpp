/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 09:02:08 by trazanad          #+#    #+#             */
/*   Updated: 2025/01/02 09:48:56 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP

#define CURE_HPP

#include "AMateria.hpp"

class	Cure: public AMateria
{
	public:
		~Cure( void );
		Cure( void );
		Cure( Cure const & copy );
		Cure &operator=( Cure const & copy );
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif