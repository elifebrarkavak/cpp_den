/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikavak <elikavak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 19:46:20 by elikavak          #+#    #+#             */
/*   Updated: 2025/06/23 20:21:29 by elikavak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() 
{
    int N = 5;
    Zombie* zombie = zombieHorde(N, "Ebrar");

    for (int i = 0; i < N; i++) 
	{
        zombie[i].announce();
    }
	delete[] zombie;
    return 0;
}