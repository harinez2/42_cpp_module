#include <iostream>
#include "Account.hpp"

Account::Account(int initial_deposit)
{
	_accountIndex = 0;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	_nbAccounts++;
	_totalAmount += initial_deposit;

	_displayTimestamp();
	std::cout << " index:" << _nbAccounts - 1 << ",";
	std::cout << "amount:" << _amount << ";created" << std::endl;
}

Account::Account(void)
{
	Account(0);
}

Account::~Account(void)
{
	_nbAccounts--;
	_totalAmount -= _amount;
	_totalNbDeposits -= _nbDeposits;
	_totalNbWithdrawals -= _nbWithdrawals;
}

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << " accounts:" << _nbAccounts << ",";
	std::cout << "total:" << _totalAmount << ",";
	std::cout << "deposits:" << _totalNbDeposits << ",";
	std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

// #include <string>
// #include <chrono>
// #include <sstream>
// #include <iomanip>
void	Account::_displayTimestamp(void)
{
	// auto now = std::chrono::system_clock::now();
	// auto now_c = std::chrono::system_clock::to_time_t(now);
	// std::stringstream ss;
	// ss << std::put_time(localtime(&now_c), "%Y%m%d_%H%M%S");
	// std::cout << ss.str();

	std::cout << "[";
	time_t now = time(nullptr);
	struct tm* localNow = localtime(&now);
	std::cout << localNow->tm_mday + 1 << "/" << localNow->tm_mon << "/" << localNow->tm_year;
	std::cout << "]";
}

void	Account::makeDeposit(int deposit)
{
	_amount += deposit;
	_nbDeposits++;
	
	_totalAmount += deposit;
	_totalNbDeposits++;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (_amount < withdrawal)
		return (false);
	
	_amount -= withdrawal;
	_nbWithdrawals++;
	
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	return (true);
}

int		Account::checkAmount(void) const
{
	return (_amount);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ",";
	std::cout << "amount:" << _amount << ",";
	std::cout << "deposits:" << _nbDeposits << ",";
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}
