/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 09:00:59 by trazanad          #+#    #+#             */
/*   Updated: 2025/01/02 09:49:33 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP

#define ICE_HPP

#include "AMateria.hpp"

class	Ice: public AMateria
{
	public:
		~Ice( void );
		Ice( void );
		Ice( Ice const & copy );
		Ice &operator=( Ice const & copy );
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif