/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikavak <elikavak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 20:49:36 by elikavak          #+#    #+#             */
/*   Updated: 2025/06/27 16:05:00 by elikavak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main() 
{
    std::cout<<"-----------------------------------------------------------"<<std::endl;
    std::cout<<"                      WAR WITH BOB AND JIM                       "<<std::endl;
    Weapon club("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();

    Weapon knife("knife");
    HumanB jim("Jim");
    jim.attack();
    jim.setWeapon(knife);
    jim.attack();

    std::cout<<"-----------------------------------------------------------"<<std::endl;
    std::cout<<"                  WAR WITH ALICE, MARK AND EVA                       "<<std::endl;

    Weapon sword("long sword");
    HumanA alice("Alice", sword);
    alice.attack();
    sword.setType("enchanted sword");
    alice.attack();

    HumanB mark("Mark");
    mark.attack();
    Weapon hammer("war hammer");
    mark.setWeapon(hammer);
    mark.attack();

    Weapon dagger("dagger");
    HumanB eva("Eva");
    eva.attack();
    eva.setWeapon(dagger);
    eva.attack();

    dagger.setType("poisoned dagger");
    eva.attack();

    return 0;
}