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

void Contact::setContact()
{
	std::cout << "Enter first name: ";
	std::getline(std::cin, this->firstName);

	std::cout << "Enter last name: ";
	std::getline(std::cin, this->lastName);

	std::cout << "Enter nickname: ";
	std::getline(std::cin, this->nickName);

	std::cout << "Enter phone number: ";
	std::getline(std::cin, this->phoneNumber);

	std::cout << "Enter workspace: ";
	std::getline(std::cin, this->workspace);
}

bool Contact::isEmpty() const
{
	return (firstName.empty() || lastName.empty() || nickName.empty()
		 || phoneNumber.empty() || workspace.empty());
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

std::string Contact::getWorkspace() const
{
    return workspace;
}
