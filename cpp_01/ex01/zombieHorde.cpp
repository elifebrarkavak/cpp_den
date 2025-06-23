/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikavak <elikavak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 19:46:27 by elikavak          #+#    #+#             */
/*   Updated: 2025/06/23 20:16:41 by elikavak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) 
{
    if (N <= 0)
        return NULL;
		
    Zombie* zombie = new Zombie[N];
    for (int i = 0; i < N; ++i) 
	{
        zombie[i].setName(name);
    }
	
    return zombie;
}