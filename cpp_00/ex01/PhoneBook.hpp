/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikavak <elikavak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 19:32:05 by elikavak          #+#    #+#             */
/*   Updated: 2025/06/14 12:14:23 by elikavak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	ContackArray[8];
		int		index;
		int		count;
	public:
		PhoneBook();
		void ft_Add();
		void ft_Search();
		void ft_Exit();
};

#endif