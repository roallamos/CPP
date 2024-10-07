#include "Account.hpp"
#include <iostream>
#include <ctime>

	int	Account::_nbAccounts = 0;
	int	Account::_totalAmount = 0;
	int	Account::_totalNbDeposits = 0;
	int	Account::_totalNbWithdrawals = 0;

void    timestamp(void)
{
    time_t t ;
    struct tm *tmp ;
    char MY_TIME[50];

    time( &t );
    tmp = localtime( &t );
    strftime(MY_TIME, sizeof(MY_TIME), "%Y", tmp);
    std::cout << "[" << MY_TIME << tmp->tm_mon;
    std::cout << tmp->tm_mday << "_" << tmp->tm_hour;
    std::cout << tmp->tm_min << tmp->tm_sec << "] ";
}
Account::Account(int initial_deposit)
{
    t::_accountIndex = t::_nbAccounts;
    t::_nbAccounts++;
    t::_amount = initial_deposit;
    t::_totalAmount += t::_amount;
    t::_nbDeposits = 0;
    t::_nbWithdrawals = 0;
    timestamp();
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
    timestamp();
    std::cout << "account:" << t::getNbAccounts();
    std::cout << ";total:" << t::getTotalAmount();
    std::cout << ";deposits:" << t::getNbDeposits();
    std::cout << ";withdrawals:" << t::getNbWithdrawals() << std::endl;
}
void	Account::displayStatus( void )  const
{
    timestamp();
    std::cout << "index:" << _accountIndex;
    std::cout << ";amount:" << _amount;
    std::cout << ";deposits:" << _nbDeposits;
    std::cout << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    t::_totalAmount += deposit;
    t::_nbDeposits++;
    t::_totalNbDeposits++;
    timestamp();
    std::cout << "index:" << _accountIndex;
    std::cout << ";p_amount:" << _amount;
    t::_amount += deposit;
    std::cout << ";deposit:" << deposit;
    std::cout << ";amount:" << _amount;
    std::cout << ";nb_deposits:" << _nbDeposits << std::endl;
}

int		Account::checkAmount( void ) const
{
    return (_amount);
}

bool	Account::makeWithdrawal( int withdrawal )
{
    timestamp();
    std::cout << "index:" << _accountIndex;
    std::cout << ";p_amount:" << _amount;
    if (checkAmount() < withdrawal)
    {
        std::cout << ";withdrawal:refused" << std::endl;
        return (0);
    }
    else
    {
        t::_totalAmount -= withdrawal;
        t::_amount -= withdrawal;
        t::_nbWithdrawals++;
        t::_totalNbWithdrawals++;
        std::cout << ";withdawal:" << withdrawal << ";amount:" << _amount;
        std::cout << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
        return (1);
    }
}

Account::~Account()
{
    timestamp();
    std::cout << "index:" << t::_accountIndex;
    std::cout << ";amount:" << t::_amount;
    std::cout << ";closed"  << std::endl;
    return ;
}