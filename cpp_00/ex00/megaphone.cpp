/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikavak <elikavak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 13:27:00 by elikavak          #+#    #+#             */
/*   Updated: 2025/06/15 12:04:33 by elikavak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <cstring> 

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout<< "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
		return (1);
	}
	for (int i = 1; i < argc; i++)
	{
		for (size_t j = 0; j < strlen(argv[i]); j++)
			argv[i][j] = toupper(argv[i][j]);
		std::cout<<argv[i];
		if (i != argc -1)
			std::cout << " ";
	}
	std::cout<<std::endl;
	return (0);
}