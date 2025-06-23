/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikavak <elikavak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 00:07:25 by elikavak          #+#    #+#             */
/*   Updated: 2025/06/24 00:24:38 by elikavak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl;
	if (argc == 1 || argc > 2)
	{
		std::cout << "Usage: ./harlFilter <LEVEL>" << std::endl;
		return (1);
	}
	else
		harl.complain(argv[1]);
	return 0;
		
}