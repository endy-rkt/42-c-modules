/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 09:28:57 by trazanad          #+#    #+#             */
/*   Updated: 2024/12/31 09:29:16 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*--------------------------------constructor--------------------------------*/

ScavTrap::~ScavTrap( void )
{
    std::cout << "Destructor for ScavTrap " << this->_name << " called." << std::endl; 
}

ScavTrap::ScavTrap( void ):ClapTrap()
{
    this->_hitPoint = 100;
    this->_energyPoint = 50;
    this->_attackDamage = 20;
    std::cout << "Default constructor called for ScavTrap" << std::endl;
}

ScavTrap::ScavTrap( std::string name):ClapTrap(name)
{
    this->_hitPoint = 100;
    this->_energyPoint = 50;
    this->_attackDamage = 20;
    std::cout << "String constructor called for ScavTrap" << std::endl;  
}

ScavTrap::ScavTrap( const ScavTrap & copy ):ClapTrap(copy)
{
    std::cout << "Copy constructor called for ScavTrap" << std::endl;  
}

ScavTrap & ScavTrap::operator=(ScavTrap const & copy)
{
    std::cout << "Copy assignment operator called for ScavTrap" << std::endl;

    if (this != &copy)
    {
        this->_name = copy.getName();
        this->_hitPoint = copy.getHitPoint();
        this->_energyPoint = copy.getEnergyPoint();
        this->_attackDamage = copy.getAttackDamage();
    }
    return (*this);
}

/*--------------------------------method--------------------------------*/
void	ScavTrap::attack(const std::string& target)
{
	if (this->_energyPoint == 0)
	{
		std::cout << "ScavTrap " << this->_name << " has no eneryPoint left." << std::endl;
		return ;
	}
	if (this->_hitPoint == 0)
	{
		std::cout << "ScavTrap " << this->_name << " has no hitPoint." << std::endl;
		return ;
	}
	this->_energyPoint -= 1;
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_hitPoint << " points of damage!" << std::endl;
}

void    ScavTrap::guardGate( void )
{
   std::cout << "ScavTrap is now in Gate keeper mode !" << std::endl;  
}
