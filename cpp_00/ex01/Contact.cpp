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
    if (!std::getline(std::cin, this->firstName)) {
        std::cout << "\nInput interrupted. Exiting...\n";
        return ;
    }
}

void Contact::setLastName() 
{
    std::cout << "Enter last name: ";
    if (!std::getline(std::cin, this->lastName)) {
        std::cout << "\nInput interrupted. Exiting...\n";
        return ;
    }
}

void Contact::setNickName() 
{
    std::cout << "Enter nickname: ";
    if (!std::getline(std::cin, this->nickName)) {
        std::cout << "\nInput interrupted. Exiting...\n";
        return ;
    }
}

void Contact::setPhoneNumber()
{
    std::string input;
    bool valid = false;

    while (!valid) 
    {
        std::cout << "Enter phone number: ";
        if (!std::getline(std::cin, input)) {
            std::cout << "\nInput interrupted. Exiting...\n";
            return ;
        }

        if (input.empty()) {
            std::cout << "Phone number cannot be empty. Try again.\n";
            continue;
        }

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
    if (!std::getline(std::cin, this->darkSecret)) {
        std::cout << "\nInput interrupted. Exiting...\n";
        return ;
    }
}


bool Contact::isEmpty()
{
	return (firstName.empty() || lastName.empty() || nickName.empty()
		 || phoneNumber.empty() || darkSecret.empty());
}

std::string Contact::getFirstName()
{
    return firstName;
}

std::string Contact::getLastName()
{
    return lastName;
}

std::string Contact::getNickName()
{
    return nickName;
}

std::string Contact::getPhoneNumber()
{
    return phoneNumber;
}

std::string Contact::getdarkSecret()
{
    return darkSecret;
}
