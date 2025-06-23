/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikavak <elikavak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 22:39:38 by elikavak          #+#    #+#             */
/*   Updated: 2025/06/23 23:03:05 by elikavak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplace.hpp"

int main(int argc, char **argv) 
{
    if (argc != 4)
	{
		std::cout << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
	}  
    FileReplace replace(argv[1], argv[2], argv[3]);
    if (!replace.check_process())
        return 1;
    std::cout << "Replacement completed.\n";
    return 0;
}