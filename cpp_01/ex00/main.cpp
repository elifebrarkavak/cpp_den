/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikavak <elikavak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 17:51:35 by elikavak          #+#    #+#             */
/*   Updated: 2025/06/23 17:51:35 by elikavak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() 
{
    Zombie* heapZombie = newZombie("HeapZombie");
    heapZombie->announce();
    randomChump("StackZombie");
    delete heapZombie;
    return 0;
}