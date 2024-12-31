/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:34:09 by trazanad          #+#    #+#             */
/*   Updated: 2024/12/31 03:29:27 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

//constructor
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( void )
{
	_accountIndex = _nbAccounts;
	_amount = 0;
	_nbWithdrawals = 0;
	_nbDeposits = 0;
	//static
	_nbAccounts++;
	_displayTimestamp();
    std::cout << "index:" << _accountIndex 
              << ";amount:" << _amount 
              << ";created" << std::endl;
}
	
Account::Account(int initial_deposit)
{
	_displayTimestamp();
    std::cout << "index:" << _nbAccounts
              << ";amount:" << initial_deposit 
              << ";created" << std::endl;
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	//static
	_nbAccounts++;
	_totalAmount += initial_deposit;
}	

Account::~Account()
{
	_displayTimestamp();
    std::cout << "index:" << _accountIndex 
              << ";amount:" << _amount 
              << ";closed" << std::endl;
}
//operation

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";p_amount:" << _amount
              << ";deposit:" << deposit;
	_amount += deposit;
	_nbDeposits++;
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
	std::cout << "index:" << _accountIndex
              << ";p_amount:" << _amount;
	if (_amount >= withdrawal)
	{
		status = true;
		_amount -= withdrawal;
		_nbWithdrawals++;
		//static
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
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
	return (_amount);
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
    std::cout << "accounts:" << getNbAccounts()
              << ";total:" << getTotalAmount()
              << ";deposits:" << getNbDeposits()
              << ";withdrawals:" << getNbWithdrawals() 
              << std::endl;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
    std::cout << "index:" << _accountIndex 
			  << ";amount:" << _amount
              << ";deposits:" << _nbDeposits 
			  << ";withdrawals:" << _nbWithdrawals
              << std::endl;
}

void	Account::_displayTimestamp( void )
{
	std::time_t now = std::time(0);
  	std::tm *localTime = std::localtime(&now);
  	std::cout << "[" << localTime->tm_year + 1900 << localTime->tm_mon + 1
            << localTime->tm_mday << "_" << std::setw(2) << std::setfill('0')
            << localTime->tm_hour << std::setw(2) << std::setfill('0')
            << localTime->tm_min << std::setw(2) << std::setfill('0')
            << localTime->tm_sec << "] ";
}
