#include "Account.hpp"
#include <iostream>
Account::Account(int initial_deposit)
{
	(void)initial_deposit;
}

Account::Account(void)
{
std::cout << "a";
}

Account::~Account(void)
{

}

int	Account::getNbAccounts(void)
{
	return (0);
}

int	Account::getTotalAmount(void)
{
	return (0);
}

int	Account::getNbDeposits(void)
{
	return (0);
}

int	Account::getNbWithdrawals(void)
{
	return (0);
}

void	Account::displayAccountsInfos(void)
{
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

	time_t now = std::time(nullptr);
	struct tm* localNow = std::localtime(&now);
	std::cout << localNow->tm_mday + 1 << "/" << localNow->tm_mon << "/" << localNow->tm_year;
}

void	Account::makeDeposit(int deposit)
{
	(void)deposit;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	(void)withdrawal;
	return (true);
}

int		Account::checkAmount(void) const
{
	return (0);
}

void	Account::displayStatus(void) const
{

}
