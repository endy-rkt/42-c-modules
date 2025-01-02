/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 05:05:49 by trazanad          #+#    #+#             */
/*   Updated: 2025/01/02 05:07:32 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP

#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal 
{
	protected: 
		std::string	type;

	public:
		//constructor and destructor
		~WrongCat( void );
		WrongCat( void );
		WrongCat( const WrongCat & copy );
		WrongCat & operator=(const WrongCat & copy);

		//method
		void	makeSound( void ) const;
};

#endif