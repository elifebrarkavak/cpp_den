/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikavak <elikavak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 19:32:03 by elikavak          #+#    #+#             */
/*   Updated: 2025/06/14 12:39:32 by elikavak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <limits>

PhoneBook::PhoneBook()
{
	this->index = 0;
	this->count = 0;
}

void PhoneBook::ft_Add()
{
	if (this->index >= 8)
		this->index = 0;
	this->ContackArray[this->index].setContact();
	if (this->ContackArray[this->index].isEmpty())
	{
		std::cout << "Contact was not saved due to missing fields." << std::endl;
		return;
	}
	this->index++;
	if (this->count < 8)
		this->count++;
}

void PhoneBook::ft_Search()
{
	if (this->count == 0)
	{
		std::cout << "Phonebook is empty!" << std::endl;
		return;
	}

	std::cout << std::setw(6)  << "Index"      << " | "
			  << std::setw(15) << "First Name" << " | "
			  << std::setw(15) << "Last Name"  << " | "
			  << std::setw(15) << "Nickname"   << " | "
			  << std::setw(15) << "Phone"      << " | "
			  << std::setw(15) << "Workspace"  << std::endl;

	std::cout << "---------------------------------------------------------------------------------------------" << std::endl;

	for (int i = 0; i < this->count; ++i)
	{
		std::cout << std::setw(6)  << i << " | "
				  << std::setw(15) << ContackArray[i].getFirstName() << " | "
				  << std::setw(15) << ContackArray[i].getLastName() << " | "
				  << std::setw(15) << ContackArray[i].getNickName() << " | "
				  << std::setw(15) << ContackArray[i].getPhoneNumber() << " | "
				  << std::setw(15) << ContackArray[i].getWorkspace() << std::endl;
	}
}

void PhoneBook::ft_Exit()
{
    std::cout << "Goodbye!" << std::endl;
}
