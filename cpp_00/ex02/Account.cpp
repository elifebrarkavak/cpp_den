/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikavak <elikavak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 12:45:52 by elikavak          #+#    #+#             */
/*   Updated: 2025/06/14 12:52:28 by elikavak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;           // Toplam kaç hesap açıldı
int Account::_totalAmount = 0;          // Tüm hesaplardaki toplam para
int Account::_totalNbDeposits = 0;      // Yapılan toplam para yatırma sayısı
int Account::_totalNbWithdrawals = 0;   // Yapılan toplam para çekme sayısı

Account::Account(int initial_deposit) : 
    _accountIndex(_nbAccounts),  // Yeni hesabın indeksi toplam hesaba eşit olur
    _amount(initial_deposit),    // Hesabın ilk parası
    _nbDeposits(0),
    _nbWithdrawals(0)
{
    _nbAccounts++;               // Toplam hesap sayısını 1 artır
    _totalAmount += initial_deposit;  // Toplam paraya ekle

    // Hesap açılışıyla ilgili ekrana bilgi yazdır (timestamp dahil)
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account(void)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

int Account::getNbAccounts(void)
{
    return _nbAccounts;
}

int Account::getTotalAmount(void)
{
    return _totalAmount;
}

int Account::getNbDeposits(void)
{
    return _totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
    return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts()
              << ";total:" << getTotalAmount()
              << ";deposits:" << getNbDeposits()
              << ";withdrawals:" << getNbWithdrawals()
              << std::endl;
}

void Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";p_amount:" << _amount   // işlem öncesi bakiye
              << ";deposit:" << deposit;

    _amount += deposit;
    _nbDeposits++;
    _totalAmount += deposit;
    _totalNbDeposits++;

    std::cout << ";amount:" << _amount     // işlem sonrası bakiye
              << ";nb_deposits:" << _nbDeposits
              << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";p_amount:" << _amount
              << ";withdrawal:";

    if (withdrawal > _amount)
    {
        std::cout << "refused" << std::endl;
        return false;
    }

    _amount -= withdrawal;
    _nbWithdrawals++;
    _totalAmount -= withdrawal;
    _totalNbWithdrawals++;

    std::cout << withdrawal
              << ";amount:" << _amount
              << ";nb_withdrawals:" << _nbWithdrawals
              << std::endl;

    return true;
}

int Account::checkAmount(void) const
{
    return _amount;
}

void Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";amount:" << _amount
              << ";deposits:" << _nbDeposits
              << ";withdrawals:" << _nbWithdrawals
              << std::endl;
}

void Account::_displayTimestamp(void)
{
    std::time_t t = std::time(NULL);
    std::tm *tm = std::localtime(&t);

    std::cout << "[" 
              << (tm->tm_year + 1900)
              << (tm->tm_mon + 1 < 10 ? "0" : "") << (tm->tm_mon + 1)
              << (tm->tm_mday < 10 ? "0" : "") << tm->tm_mday
              << "_"
              << (tm->tm_hour < 10 ? "0" : "") << tm->tm_hour
              << (tm->tm_min < 10 ? "0" : "") << tm->tm_min
              << (tm->tm_sec < 10 ? "0" : "") << tm->tm_sec
              << "] ";
}
