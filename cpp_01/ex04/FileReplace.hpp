/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplace.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikavak <elikavak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 22:39:33 by elikavak          #+#    #+#             */
/*   Updated: 2025/06/27 11:29:08 by elikavak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_REPLACE_HPP
#define FILE_REPLACE_HPP

#include <iostream>
#include <string>
#include <fstream>

class FileReplace
{
	private:
		std::string filename;
		std::string result_filename;
		std::string str1;
		std::string str2;
	public:
		FileReplace(std::string filename, std::string search, std::string replace);
		~FileReplace();
		int check_process();
};

#endif