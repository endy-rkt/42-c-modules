/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 09:33:40 by trazanad          #+#    #+#             */
/*   Updated: 2025/01/02 03:44:54 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*constructor*/
DiamondTrap::~DiamondTrap( void )
{
    std::cout << "Destructor for DiamondTrap " << this->_name << " called." << std::endl;
}

DiamondTrap::DiamondTrap( void ):ClapTrap(), FragTrap(), ScavTrap()
{
	this->_name = "diamond";
    this->_energyPoint = 50;
    std::cout << "Default constructor called for DiamondTrap" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ):ClapTrap(name), FragTrap(name), ScavTrap(name)
{
	this->_name = name;
	this->_energyPoint = 50;
	std::cout << "String constructor called for DiamondTrap" << std::endl;  
}

DiamondTrap::DiamondTrap(const DiamondTrap & copy):ClapTrap(copy), FragTrap(copy), ScavTrap(copy) 
{
    std::cout << "Copy constructor called for DiamondTrap" << std::endl;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & copy)
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

//// std::string ClapTrap::name;

/*method*/
void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << "My name is " << this->_name << " but my clapTrap name is " << ClapTrap::getName() << "_clap_name" << std::endl;	
}
