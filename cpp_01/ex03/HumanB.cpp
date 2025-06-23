/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikavak <elikavak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 20:49:30 by elikavak          #+#    #+#             */
/*   Updated: 2025/06/23 21:30:46 by elikavak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) 
{
    this->name = name;
    this->weapon = NULL;
    std::cout << "HumanB named " << this->name << " has been created and is currently unarmed." << std::endl;
}

void HumanB::setWeapon(Weapon& weapon) 
{
    this->weapon = &weapon;
    std::cout << this->name << " has been armed with a " << this->weapon->getType() << "." << std::endl;
}

void HumanB::attack() 
{
    if (this->weapon)
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
    else
        std::cout << this->name << " has no weapon to attack with" << std::endl;
}