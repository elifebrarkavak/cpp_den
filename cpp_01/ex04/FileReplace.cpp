/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplace.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikavak <elikavak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 22:39:35 by elikavak          #+#    #+#             */
/*   Updated: 2025/06/27 14:27:29 by elikavak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplace.hpp"

FileReplace::FileReplace(std::string filename, std::string search, std::string replace) 
{
	std::cout << "Constructor is started!!"<<std::endl;
	this->filename = filename;
	this->str1 = search;
	this->str2 = replace;
	this->result_filename = filename + ".replace";
}

FileReplace::~FileReplace()
{
	std::cout << "Program is done. Destructor's message!"<<std::endl;
}

int FileReplace::check_process()
{
	if (str1.empty())
	{
		std::cout << "Error: The string to search (str1) cannot be empty." << std::endl;
		return 1;
	}

	std::ifstream inputFile(filename.c_str());
	if (!inputFile)
	{
		std::cout << "Error: Could not open input file '" << filename << "'." << std::endl;
		return 1;
	}

	std::ofstream outputFile(result_filename.c_str());
	if (!outputFile)
	{
		std::cout << "Error: Could not create output file '" << result_filename << "'." << std::endl;
		return 1;
	}

	std::string line;
	while (std::getline(inputFile, line))
	{
		std::string result;
		size_t pos = 0;
		size_t found;

		while ((found = line.find(str1, pos)) != std::string::npos)
		{
			result += line.substr(pos, found - pos);
			result += str2;
			pos = found + str1.length();
		}

		result += line.substr(pos);
		outputFile << result << std::endl;
	}

	return 0;
}
