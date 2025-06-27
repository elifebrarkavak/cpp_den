/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikavak <elikavak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 20:49:23 by elikavak          #+#    #+#             */
/*   Updated: 2025/06/27 11:12:04 by elikavak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : weapon(weapon) 
{
    this->name = name;
    std::cout << "HumanA named " << this->name << " has been created and is armed with a "
              << this->weapon.getType() << "." << std::endl;
}

void HumanA::attack() 
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
