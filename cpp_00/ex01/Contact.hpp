/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikavak <elikavak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 19:31:56 by elikavak          #+#    #+#             */
/*   Updated: 2025/06/14 12:21:32 by elikavak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <limits>

class Contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string phoneNumber;
		std::string nickName;
		std::string darkSecret;
	public:
		void setFirstName();
		void setLastName();
		void setNickName();
		void setPhoneNumber();
		void setDarkSecret();
		bool isEmpty() const;
		std::string getFirstName() const;
   		std::string getLastName() const;
   		std::string getNickName() const;
    	std::string getPhoneNumber() const;
    	std::string getdarkSecret() const;
};

#endif