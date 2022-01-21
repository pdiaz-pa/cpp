
#include <iostream>
#include <string>
#include "Account.hpp"

int	Account::getNbAccounts( void ){

}
int	Account::getTotalAmount( void ){

}
int	Account::getNbDeposits( void ){

}
int	Account::getNbWithdrawals( void ){

}
void	Account::displayAccountsInfos( void ){
	std::cout << "accounts:" << getNbAccounts() << ";" << "total:" << getTotalAmount() << ";" << "deposits:" << getNbDeposits() << ";" << "withdrawals:" << getNbWithdrawals() << std::endl; 
}

void	Account::makeDeposit( int deposit ){
	this->_amount = this->_amount + deposit;
	this->_nbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal ){
	this->_amount = this->_amount - withdrawal;
	this->_nbWithdrawals++;

}

int		Account::checkAmount( void ) const{

}

void	Account::displayStatus( void ) const{

}

Account::Account( int initial_deposit ){
	this->_amount = this->_amount + initial_deposit;
	std::cout << "index:" << this->_accountIndex << ";" << "amount:" << this->_amount << ";" << "created" << std::endl;
}

Account::~Account( void ){
std::cout << "index:" << this->_accountIndex << ";" << "amount:" << this->_amount << ";" << "closed" << std::endl;
}