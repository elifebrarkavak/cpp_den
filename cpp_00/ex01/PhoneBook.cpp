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

PhoneBook::PhoneBook()
{
	this->index = 0;
	this->count = 0;
}

void PhoneBook::ft_Add()
{
	if (this->index >= 8)
		this->index = 0;

	this->ContackArray[this->index].setFirstName();
	this->ContackArray[this->index].setLastName();
	this->ContackArray[this->index].setNickName();
	this->ContackArray[this->index].setPhoneNumber();
	this->ContackArray[this->index].setDarkSecret();

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

    std::cout << "     *********************************************" << std::endl;

    std::cout << std::setw(10) << "Index" << " | "
              << std::setw(10) << "First Name" << " | "
              << std::setw(10) << "Last Name" << " | "
              << std::setw(10) << "Nickname" << std::endl;

    std::cout << "     ---------------------------------------------" << std::endl;

    for (int i = 0; i < this->count; ++i)
    {
        std::string firstName = ContackArray[i].getFirstName();
        std::string lastName = ContackArray[i].getLastName();
        std::string nickname = ContackArray[i].getNickName();

        if (firstName.length() > 10)
            firstName = firstName.substr(0, 9) + ".";
        if (lastName.length() > 10)
            lastName = lastName.substr(0, 9) + ".";
        if (nickname.length() > 10)
            nickname = nickname.substr(0, 9) + ".";

        std::cout << std::setw(10) << std::right << i << " | "
                  << std::setw(10) << std::right << firstName << " | "
                  << std::setw(10) << std::right << lastName << " | "
                  << std::setw(10) << std::right << nickname << std::endl;
        
        std::cout << "     ---------------------------------------------" << std::endl;
        
    }
    std::cout << "Enter an index or -1 to exit search: ";
    std::string input;
    std::getline(std::cin, input);
    int get_index;
    const char *str;
    str = input.c_str();
    get_index = std::atoi(str);

    if (get_index == -1)
    {
        std::cout << "Exit Search" << std::endl;
        return;
    }
    if (get_index < 0 || get_index >= this->count)
    {
        std::cout << "Wrong index" << std::endl;
        return;
    }
    
    std::string firstName = ContackArray[get_index].getFirstName();
    std::string lastName = ContackArray[get_index].getLastName();
    std::string nickname = ContackArray[get_index].getNickName();
    std::string phonenumber = ContackArray[get_index].getPhoneNumber();
    std::string darksecret = ContackArray[get_index].getdarkSecret();

    if (firstName.length() > 10)
        firstName = firstName.substr(0, 9) + ".";
    if (lastName.length() > 10)
        lastName = lastName.substr(0, 9) + ".";
    if (nickname.length() > 10)
        nickname = nickname.substr(0, 9) + ".";
    if (phonenumber.length() > 10)
        phonenumber = phonenumber.substr(0, 9) + ".";
    if (darksecret.length() > 10)
        darksecret = darksecret.substr(0, 9) + ".";

    std::cout << std::setw(10) << "Index" << " | "
              << std::setw(10) << "First Name" << " | "
              << std::setw(10) << "Last Name" << " | "
              << std::setw(10) << "Nick Name" << " | "
              << std::setw(10) << "Phone Number" << " | "
              << std::setw(10) << "Dark Secret" << std::endl;

    std::cout << "     --------------------------------------------------------------------------" << std::endl;

    std::cout << std::setw(10) << std::right << get_index << " | "
              << std::setw(10) << std::right << firstName << " | "
              << std::setw(10) << std::right << lastName << " | "
              << std::setw(10) << std::right << nickname << " | "
              << std::setw(10) << std::right << phonenumber << " | "
              << std::setw(10) << std::right << darksecret << std::endl;
    
    std::cout << "     --------------------------------------------------------------------------" << std::endl;
}


void PhoneBook::ft_Exit()
{
    std::cout << "Goodbye!" << std::endl;
}
