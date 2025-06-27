/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikavak <elikavak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 00:07:29 by elikavak          #+#    #+#             */
/*   Updated: 2025/06/27 14:13:27 by elikavak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug() 
{
	std::cout<< "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info() 
{
	std::cout<<"[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning() 
{
	std::cout<<"[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error() 
{
	std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) 
{
	int status;
	if (level == "DEBUG" || level == "debug")
		status = 0;
	else if(level == "INFO" || level == "info")
		status = 1;
	else if(level == "WARNING" || level == "warning")
		status = 2;
	else if(level == "ERROR" || level == "error")
		status = 3;
	else
		status = -1;
	switch (status)
	{
		case 0:
			debug();
			std::cout<<std::endl;
			info();
			std::cout<<std::endl;
			warning();
			std::cout<<std::endl;
			error();
			break;
		case 1:
			info();
			std::cout<<std::endl;
			warning();
			std::cout<<std::endl;
			error();
			break;
		case 2:
			warning();
			std::cout<<std::endl;
			error();
			break;
		case 3:
			error();
			break;
		default :
			std::cout << "[ Invalid Level!!! ]" << std::endl;
            break;
	}
}