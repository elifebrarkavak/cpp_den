/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikavak <elikavak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 19:32:00 by elikavak          #+#    #+#             */
/*   Updated: 2025/06/14 12:39:20 by elikavak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setFirstName() 
{
    std::cout << "Enter first name: ";
    std::getline(std::cin, this->firstName);
}

void Contact::setLastName() 
{
    std::cout << "Enter last name: ";
    std::getline(std::cin, this->lastName);
}

void Contact::setNickName() 
{
    std::cout << "Enter nickname: ";
    std::getline(std::cin, this->nickName);
}

void Contact::setPhoneNumber()
{
    std::string input;
    bool valid = false;

    while (!valid) 
	{
        std::cout << "Enter phone number: ";
        std::getline(std::cin, input);
        valid = true;
        for (size_t i = 0; i < input.length(); ++i) {
            if (!std::isdigit(input[i])) {
                valid = false;
                break;
            }
        }
        if (!valid)
            std::cout << "Phone number must contain only digits (0-9). Try again.\n";
    }
    this->phoneNumber = input;
}


void Contact::setDarkSecret() 
{
    std::cout << "Enter dark secret: ";
    std::getline(std::cin, this->darkSecret);
}

bool Contact::isEmpty() const
{
	return (firstName.empty() || lastName.empty() || nickName.empty()
		 || phoneNumber.empty() || darkSecret.empty());
}

std::string Contact::getFirstName() const
{
    return firstName;
}

std::string Contact::getLastName() const
{
    return lastName;
}

std::string Contact::getNickName() const
{
    return nickName;
}

std::string Contact::getPhoneNumber() const
{
    return phoneNumber;
}

std::string Contact::getdarkSecret() const
{
    return darkSecret;
}
