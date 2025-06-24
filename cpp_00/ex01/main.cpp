/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikavak <elikavak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 19:32:10 by elikavak          #+#    #+#             */
/*   Updated: 2025/06/14 12:39:08 by elikavak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook 	phone;
	std::string	str;

	while (true)
	{
		std::cout << "Enter a command [ ADD | SEARCH | EXIT ] > ";
		if (!std::getline(std::cin, str))
		{
			std::cout<<std::endl;
			break;
		}
		if(str == "EXIT")
		{
			phone.ft_Exit();
			return (0);
		}
		else if(str == "ADD")
			phone.ft_Add();
		else if (str == "SEARCH")
			phone.ft_Search();
		else
			std::cout << "Please enter correct command!!" << std::endl;
	}
	return (0);
}