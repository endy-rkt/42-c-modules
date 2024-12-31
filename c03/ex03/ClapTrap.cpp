/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 09:02:40 by trazanad          #+#    #+#             */
/*   Updated: 2024/11/28 09:46:55 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*--------------------------------constructor--------------------------------*/

ClapTrap::~ClapTrap( void )
{
    std::cout << "Destructor for claptrap " << this->_name << " called." << std::endl; 
}

ClapTrap::ClapTrap( void ): _name("dude"), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name): _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
    std::cout << "String constructor called" << std::endl;  
}

ClapTrap::ClapTrap( const ClapTrap & copy ):_name(copy._name), _hitPoint(copy._hitPoint), _energyPoint(copy._energyPoint), _attackDamage(copy._attackDamage)
{
    std::cout << "Copy constructor called" << std::endl;  
}

ClapTrap & ClapTrap::operator=(ClapTrap const & copy)
{
    std::cout << "Copy assignment operator called" << std::endl;

    if (this != &copy)
    {
        this->_name = copy.getName();
        this->_hitPoint = copy.getHitPoint();
        this->_energyPoint = copy.getEnergyPoint();
        this->_attackDamage = copy.getAttackDamage();
    }
    return (*this);
}

/*--------------------------------getter--------------------------------*/
std::string ClapTrap::getName( void ) const
{
    return (this->_name);   
}

unsigned int	ClapTrap::getHitPoint( void ) const
{
    return (this->_hitPoint);   
}

unsigned int	ClapTrap::getEnergyPoint( void ) const
{
    return (this->_energyPoint);   
}

unsigned int	ClapTrap::getAttackDamage( void ) const
{
    return (this->_attackDamage);   
}

/*--------------------------------method--------------------------------*/
void	ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoint == 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no eneryPoint left." << std::endl;
		return ;
	}
	if (this->_hitPoint == 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no hitPoint." << std::endl;
		return ;
	}
	this->_energyPoint -= 1;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_hitPoint << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoint <= 0)
		return ;
	this->_hitPoint += amount;
	std::cout << this->_name << " repairs himself, his hitPoint increases to " << this->_hitPoint << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	unsigned int	prevHitPoint;
	if (this->_hitPoint == 0)
	{
		std::cout << this->_name << " has no hitPoint." << std::endl;
		return ;
	}
	prevHitPoint = this->_hitPoint;
	this->_hitPoint -= amount;
	if (this->_hitPoint > prevHitPoint)
		this->_hitPoint = 0;
	std::cout << this->_name << " takes damage, his hitPoint decreases to " << this->_hitPoint << std::endl;
}
