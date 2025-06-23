/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikavak <elikavak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 20:26:15 by elikavak          #+#    #+#             */
/*   Updated: 2025/06/23 20:46:10 by elikavak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Memory address of the string variable     : " << &str << std::endl;
    std::cout << "Memory address held by stringPTR         : " << stringPTR << std::endl;
    std::cout << "Memory address of stringPTR itself        : " << &stringPTR << std::endl; //eklendi
    std::cout << "Memory address held by stringREF         : " << &stringREF << std::endl;

    std::cout << "Value of the string variable              : " << str << std::endl;
    std::cout << "Value pointed to by stringPTR            : " << *stringPTR << std::endl;
    std::cout << "Value pointed to by stringREF            : " << stringREF << std::endl;
	
	return 0;
}