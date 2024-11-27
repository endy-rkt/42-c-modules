/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:34:09 by trazanad          #+#    #+#             */
/*   Updated: 2024/11/27 15:51:56 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <string>

//constructor
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( void )
{
	this->_accountIndex = _nbAccounts % 8;
	this->_amount = 0;
	//static
	this->_nbAccounts++;
	_displayTimestamp();
    std::cout << " index:" << _accountIndex 
              << ";amount:" << _amount 
              << ";created" << std::endl;
}

Account::Account(int initial_deposit)
{
	this->_accountIndex = _nbAccounts % 8;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	//static
	this->_nbAccounts++;
	this->_totalAmount += initial_deposit;
	this->_totalNbDeposits++;
	_displayTimestamp();
    std::cout << " index:" << _accountIndex 
              << ";amount:" << _amount 
              << ";created" << std::endl;
}	

Account::~Account()
{
	_displayTimestamp();
    std::cout << " index:" << _accountIndex 
              << ";amount:" << _amount 
              << ";closed" << std::endl;
}
//operation

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
    std::cout << " index:" << _accountIndex
              << ";p_amount:" << _amount
              << ";deposit:" << deposit;
	this->_amount += deposit;
	this->_nbDeposits++;
	//static
	_totalAmount += deposit;
	_totalNbDeposits++;
	std::cout << ";amount:" << _amount
              << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	bool	status;

	status = false;
	_displayTimestamp();
    std::cout << " index:" << _accountIndex
              << ";p_amount:" << _amount;
	if (this->_amount <= withdrawal)
	{
		status = true;
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		//static
		this->_totalAmount -= withdrawal;
		this->_totalNbWithdrawals++;
		std::cout << ";withdrawal:" << withdrawal
              << ";amount:" << _amount
              << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	}
	if (!status)
		std::cout << ";withdrawal:refused" << std::endl;
	return (status);
}

int	Account::checkAmount ( void ) const
{
	return (this->_amount);
}

//getters
int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
    std::cout << " accounts:" << getNbAccounts()
              << ";total:" << getTotalAmount()
              << ";deposits:" << getNbDeposits()
              << ";withdrawals:" << getNbWithdrawals() 
              << std::endl;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
    std::cout << " accounts:" << getNbAccounts()
              << ";total:" << getTotalAmount()
              << ";deposits:" << getNbDeposits()
              << ";withdrawals:" << getNbWithdrawals() 
              << std::endl;
}

void	Account::_displayTimestamp( void )
{
	std::cout << "[19920104_091532]";
}