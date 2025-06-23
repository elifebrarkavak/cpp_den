/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikavak <elikavak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 20:49:39 by elikavak          #+#    #+#             */
/*   Updated: 2025/06/23 21:32:10 by elikavak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon 
{
	private:
		std::string type;

	public:
		Weapon(std::string type);
		const std::string& getType();
		void setType(std::string type);
};


#endif