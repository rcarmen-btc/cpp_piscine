#include "Account.hpp"
#include <iostream>     // std::cout
#include <iomanip>      // std::put_time
#include <chrono>  

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


void	Account::_displayTimestamp( void ) { 

	time_t		t;
	struct tm	*tm;
	t = time(0);
	tm = localtime(&t);
	std::cout	<< "[" << tm->tm_year + 1900
				<< std::setfill('0') << std::setw(2) << tm->tm_mon + 1
				<< std::setfill('0') << std::setw(2) << tm->tm_mday << "_"
				<< std::setfill('0') << std::setw(2) << tm->tm_hour
				<< std::setfill('0') << std::setw(2) << tm->tm_min
				<< std::setfill('0') << std::setw(2) << tm->tm_sec << "] ";
	return ;
}

int	Account::getNbAccounts( void ) { return _nbAccounts; }

int	Account::getTotalAmount( void ) { return _totalAmount; }

int	Account::getNbDeposits( void ) { return _totalNbDeposits; }

int	Account::getNbWithdrawals( void ) { return _totalNbWithdrawals; }

void	Account::displayAccountsInfos( void ) {

	_displayTimestamp();
	std::cout	<< "accounts:" << _nbAccounts
				<< ";total:" << _totalAmount
				<< ";deposits:" << _totalNbDeposits
				<< ";withdeawals:" << _totalNbWithdrawals << std::endl;
	return;
}



Account::Account( int initial_deposit ) {

	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";created" << std::endl;
	return ;
}

Account::~Account( void ) {

	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";closed" << std::endl;
	return ;
}

void	Account::makeDeposit( int deposit ) {

	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount;
	std::cout << ";deposit:" << deposit;
	std::cout << ";amount:" << _amount + deposit;
	std::cout << ";nb_deposits:" << _nbDeposits + 1 << std::endl;
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	return ;
}

bool	Account::makeWithdrawal( int withdrawal ) {

	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount;
	if (_amount >= withdrawal)
	{
		std::cout << ";withdrawal:" << withdrawal;
		std::cout << ";amount:" << _amount - withdrawal;
		std::cout << ";nb_withdrawals:" << _nbWithdrawals + 1 << std::endl;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		return (true);
	}
	else
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return (false);
	}
}

int		Account::checkAmount( void ) const { return _amount; }

void	Account::displayStatus( void ) const {

	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
	return ;
}
