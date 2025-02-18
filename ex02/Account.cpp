/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 05:57:40 by mazeghou          #+#    #+#             */
/*   Updated: 2025/02/18 07:28:03 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

int Account::_nbAccounts = 0;

int Account::_totalNbWithdrawals = 0;

int Account::_totalNbDeposits = 0;

int Account::_totalAmount = 0;

void Account::_displayTimestamp(void)
{
	std::time_t t = time(NULL);
	tm *now = localtime(&t);

	char buffer[20];
	strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", now);

	cout << "[" << std::string(buffer) << "] ";
}

Account::Account(int initial_deposit)
{
	this->_accountIndex = this->getNbAccounts();
	t::_displayTimestamp();
	cout << "index:" << this->_accountIndex;
	cout << ";";
	this->_amount = initial_deposit;
	t::_totalAmount += initial_deposit;
	cout << "amount:" << this->checkAmount();
	cout << ";";
	cout << "created" << endl;
	t::_nbAccounts++;
}

Account::~Account(void)
{
	t::_displayTimestamp();
	cout << "index:" << this->_accountIndex;
	cout << ";";
	cout << "amount:" << this->checkAmount();
	cout << ";";
	cout << "closed" << endl;
	t::_nbAccounts--;
}

bool Account::makeWithdrawal(int withdrawal)
{
	t::_displayTimestamp();
	if ((this->_amount - withdrawal) < 0)
	{
		cout << "index:" << this->_accountIndex;
		cout << ";";
		cout << "p_amount:" << this->checkAmount();
		cout << ";";
		cout << "withdrawal:" << "refused" << endl;
		return (false);
	}
	else
	{
		cout << "index:" << this->_accountIndex;
		cout << ";";
		cout << "p_amount:" << this->checkAmount();
		this->_nbWithdrawals++;
		t::_totalNbWithdrawals++;
		cout << ";";
		cout << "withdrawal:" << withdrawal;
		this->_amount -= withdrawal;
		t::_totalAmount -= withdrawal;
		cout << ";";
		cout << "amount:" << this->checkAmount();
		cout << ";";
		cout << "nb_withdrawals:" << this->_nbWithdrawals << endl;
		return (true);
	}
}

int Account::checkAmount(void) const
{
	return (this->_amount);
}

void Account::makeDeposit(int deposit)
{
	t::_displayTimestamp();
	cout << "index:" << this->_accountIndex;
	cout << ";";
	cout << "p_amount:" << this->checkAmount();
	this->_nbDeposits++;
	t::_totalNbDeposits++;
	this->_amount += deposit;
	t::_totalAmount += deposit;
	cout << ";";
	cout << "deposit:" << deposit;
	cout << ";";
	cout << "amount:" << this->checkAmount();
	cout << ";";
	cout << "nb_deposits:" << this->_nbDeposits << endl;
}

int Account::getNbAccounts(void)
{
	return (t::_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (t::_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (t::_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (t::_totalNbWithdrawals);
}

void Account::displayStatus(void) const
{
	t::_displayTimestamp();
	cout << "index:" << this->_accountIndex;
	cout << ";";
	cout << "amount:" << this->checkAmount();
	cout << ";";
	cout << "deposits:" << this->_nbDeposits;
	cout << ";";
	cout << "withdrawals:" << this->_nbWithdrawals << endl;
}

void Account::displayAccountsInfos(void)
{
	t::_displayTimestamp();
	cout << "accounts:" << t::getNbAccounts();
	cout << ";";
	cout << "total:" << t::getTotalAmount();
	cout << ";";
	cout << "deposits:" << t::getNbDeposits();
	cout << ";";
	cout << "withdrawals:" << t::getNbWithdrawals() << endl;
}
