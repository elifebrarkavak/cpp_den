/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplace.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikavak <elikavak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 22:39:35 by elikavak          #+#    #+#             */
/*   Updated: 2025/06/23 23:07:37 by elikavak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplace.hpp"

FileReplace::FileReplace(std::string filename, std::string search, std::string replace) 
{
    this->filename = filename;
    this->str1 = search;
    this->str2 = replace;
    this->result_filename = filename + ".replace";
}

FileReplace::~FileReplace()
{
	std::cout << "Program is done. Destructor's message!"<<std::endl;
}

bool FileReplace::check_process()
{
    if (str1.empty())
    {
        std::cout << "Error: The string to search (str1) cannot be empty." << std::endl;
        return false;
    }

    std::ifstream inputFile(filename.c_str());
    if (!inputFile)
    {
        std::cout << "Error: Could not open input file '" << filename << "'." << std::endl;
        return false;
    }

    std::ofstream outputFile(result_filename.c_str());
    if (!outputFile)
    {
        std::cout << "Error: Could not create output file '" << result_filename << "'." << std::endl;
        return false;
    }

    std::string line;
    while (std::getline(inputFile, line))
    {
        size_t pos = 0;
        while ((pos = line.find(str1, pos)) != std::string::npos)
        {
            line.erase(pos, str1.length());
            line.insert(pos, str2);
            pos += str2.length();
        }
        outputFile << line << std::endl;
    }

    inputFile.close();
    outputFile.close();

    return true;
}