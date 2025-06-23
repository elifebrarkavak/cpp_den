/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikavak <elikavak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 23:14:04 by elikavak          #+#    #+#             */
/*   Updated: 2025/06/24 00:03:03 by elikavak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug() 
{
	std::cout << "Debug is running" <<std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info() 
{
	std::cout << "Info is running" <<std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning() 
{
	std::cout << "Warning is running" <<std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error() 
{
	std::cout << "Error is running" <<std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) 
{
	int i;
	complains comp[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string selectLevel[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	for (i = 0; i < 4; i++)
	{
		if(selectLevel[i] == level) 
		{
			(this->*comp[i])();
			break;
		}
	}
}