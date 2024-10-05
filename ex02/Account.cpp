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
    std::cout << "index:" << t::_accountIndex;
    std::cout << ";amount:" << t::_amount;
    std::cout << ";created"  << std::endl;
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
    std::cout << "account:" << t::getNbAccounts();
    std::cout << ";total:" << t::getTotalAmount();
    std::cout << ";deposits:" << t::getNbDeposits();
    std::cout << ";withdrawals:" << t::getNbWithdrawals() << std::endl;
}
void	Account::displayStatus( void )  const
{
    std::cout << "index:" << _accountIndex;
    std::cout << ";amount:" << _amount;
    std::cout << ";deposits:" << _nbDeposits;
    std::cout << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    t::_totalAmount += deposit;
    t::_nbDeposits++;
    std::cout << "index:" << _accountIndex;
    std::cout << ";p_amount:" << _amount;
    t::_amount += deposit;
    std::cout << ";deposit:" << deposit;
    std::cout << ";amount:" << _amount;
    std::cout << ";nb_deposits:" << _nbWithdrawals << std::endl;
}

Account::~Account()
{
    return ;
}