/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikavak <elikavak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 17:51:38 by elikavak          #+#    #+#             */
/*   Updated: 2025/06/23 17:51:38 by elikavak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}
Zombie::~Zombie()
{
	std::cout << this->name << " is destroyed." << std::endl;
}

void Zombie::announce(void) 
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}