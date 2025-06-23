/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikavak <elikavak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 00:07:27 by elikavak          #+#    #+#             */
/*   Updated: 2025/06/24 00:14:40 by elikavak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

class Harl 
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);

	public:
		void complain(std::string level);
};

#endif