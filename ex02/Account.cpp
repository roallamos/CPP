#include "Account.hpp"
#include <iostream>

	int	Account::_nbAccounts = 0;
	int	Account::_totalAmount = 0;
	int	Account::_totalNbDeposits = 0;
	int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    t::_accountIndex = t::_nbAccounts;
    t::_nbAccounts++;
    t::_amount = initial_deposit;
    t::_totalAmount += t::_amount;
    t::_nbDeposits = 0;
    t::_nbWithdrawals = 0;
    std::cout << "index:" << t::_accountIndex << ";amount:" << t::_amount << ";created"  << std::endl;
}

int	Account::getNbWithdrawals( void )
{
    return (t::_totalNbWithdrawals);
}

int	Account::getNbDeposits( void )
{
    return (t::_totalNbDeposits);
}

int Account::getTotalAmount( void )
{
    return (t::_totalAmount);
}

int	Account::getNbAccounts( void )
{
    return (t::_nbAccounts);
}

void Account::displayAccountsInfos(void)
{
    std::cout << "account:" << t::getNbAccounts() << ";total:" << t::getTotalAmount() << ";deposits:" << t::getNbDeposits() << ";withdrawals:" << t::getNbWithdrawals() << std::endl;
}

Account::~Account()
{
    return ;
}