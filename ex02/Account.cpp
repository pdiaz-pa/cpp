
#include <iostream>
#include <string>
#include "Account.hpp"

int	Account::getNbAccounts( void ){
	return _nbAccounts;
}
int	Account::getTotalAmount( void ){
	return _totalAmount;
}
int	Account::getNbDeposits( void ){
	return _totalNbDeposits;
}
int	Account::getNbWithdrawals( void ){
	return _totalNbWithdrawals;
}
void	Account::displayAccountsInfos( void ){
	std::cout << "accounts:" << getNbAccounts() << ";" << "total:" << getTotalAmount() << ";" << "deposits:" << getNbDeposits() << ";" << "withdrawals:" << getNbWithdrawals() << std::endl; 
}

void	Account::makeDeposit( int deposit ){
	Account::_totalAmount = Account::_totalAmount + deposit;
	std::cout << "index:" << this->_accountIndex << ";"  << "p_amount:" << this->_amount <<  "deposit:" << deposit << ";";
	this->_amount = this->_amount + deposit;
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	std::cout << "amount:" << this->_amount << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ){
	std::cout << "index:" << this->_accountIndex  << ";" << "p_amount:" << this->_amount << ";" << "withdrawal:";  
	if (((this->_amount - withdrawal) >= 0)){
		this->_amount = this->_amount - withdrawal;
		Account::_totalAmount = Account::_totalAmount - withdrawal;
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		std::cout << withdrawal << ";" << "amount:" << this->_amount << ";" << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (1);
	}
	else{
		std::cout << "refused" << std::endl;
		return (0);
	}

}

int		Account::checkAmount( void ) const{
	return 0;
}

void	Account::displayStatus( void ) const{

}

Account::Account( int initial_deposit ){
	Account::_totalAmount = Account::_totalAmount + initial_deposit;
	Account::_nbAccounts++;
	this->_accountIndex = Account::_nbAccounts - 1;
	this->_amount = initial_deposit;
	std::cout << "index:" << this->_accountIndex << ";" << "amount:" << this->_amount << ";" << "created" << std::endl;
}

Account::~Account( void ){
std::cout << "index:" << this->_accountIndex << ";" << "amount:" << this->_amount << ";" << "closed" << std::endl;
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;