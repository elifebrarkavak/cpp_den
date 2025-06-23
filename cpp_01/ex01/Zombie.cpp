/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikavak <elikavak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 19:46:24 by elikavak          #+#    #+#             */
/*   Updated: 2025/06/23 20:15:36 by elikavak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Start Zombies!!" << std::endl;
}
Zombie::~Zombie()
{
	std::cout << this->name << " is destroyed." << std::endl;
}

void Zombie::announce(void) 
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) 
{
    this->name = name;
}