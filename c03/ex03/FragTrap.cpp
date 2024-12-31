/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 10:03:53 by trazanad          #+#    #+#             */
/*   Updated: 2024/12/31 09:31:20 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::~FragTrap( void )
{
    std::cout << "Destructor for FragTrap " << this->_name << " called." << std::endl;
}

FragTrap::FragTrap( void ):ClapTrap()
{
    this->_hitPoint = 100;
    this->_energyPoint = 100;
    this->_attackDamage = 30;
    std::cout << "Default constructor called for FragTrap" << std::endl;
}

FragTrap::FragTrap( std::string name):ClapTrap(name)
{
    this->_hitPoint = 100;
    this->_energyPoint = 100;
    this->_attackDamage = 30;
    std::cout << "String constructor called for FragTrap" << std::endl;  
}

FragTrap::FragTrap( const FragTrap & copy ):ClapTrap(copy)
{
    std::cout << "Copy constructor called for FragTrap" << std::endl;  
}

FragTrap & FragTrap::operator=(FragTrap const & copy)
{
    std::cout << "Copy assignment operator called for FragTrap" << std::endl;

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
void	FragTrap::attack(const std::string& target)
{
	if (this->_energyPoint == 0)
	{
		std::cout << "FragTrap " << this->_name << " has no eneryPoint left." << std::endl;
		return ;
	}
	if (this->_hitPoint == 0)
	{
		std::cout << "FragTrap " << this->_name << " has no hitPoint." << std::endl;
		return ;
	}
	this->_energyPoint -= 1;
	std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_hitPoint << " points of damage!" << std::endl;
}

void    FragTrap::guardGate( void )
{
   std::cout << "FragTrap is now in Gate keeper mode !" << std::endl;  
}

void    FragTrap::guarhighFivesGuysdGate( void )
{
   std::cout << "FragTrap gives a positive high fives request!" << std::endl;  
}
