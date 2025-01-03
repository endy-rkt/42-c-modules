/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 07:20:42 by trazanad          #+#    #+#             */
/*   Updated: 2025/01/03 01:36:32 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

std::string	formatLine(std::string line, std::string s1, std::string s2)
{
	int	s1Len;
	int	stop;
	int	i;
	std::string	newLine;

	s1Len = s1.length();
	stop = line.find(s1, 0);
	newLine = "";
	i = 0;
	while (i < (int)line.length())
	{
		if (stop == i)
		{
			newLine = newLine + s2;
			i += s1Len;
			stop = line.find(s1, stop + 1);
		}
		else
		{
			newLine += line[i];
			i++;
		}
	}
	line.clear();
	return (newLine);
}

int	validateReadFile(std::ifstream &MyReadFile, std::string filename)
{
	if (!MyReadFile.is_open()) 
	{
        std::cerr << "Error: Unable to create or open the file " << filename << std::endl;
        MyReadFile.close();
        return (0);
    }
	return (1);
}

int	validateNewFile(std::ifstream &MyReadFile, std::ofstream &MyNewFile, std::string newFilename)
{
	if (!MyNewFile.is_open()) 
	{
        std::cerr << "Error: Unable to create or open the file " << newFilename << std::endl;
        MyReadFile.close();
		MyNewFile.close();
        return (0);
    }
	return (1);
}

std::string	strimNewLine(std::string line, std::string newLine)
{
	int			lineSize;
	int			newLineSize;
	std::string	res;

	lineSize = line.size();
	if (lineSize == 0)
		return (newLine);
	if (line[lineSize - 1] != '\n' && line != "")
	{
		newLineSize = newLine.size();
		if (newLineSize == 0)
			return (newLine);
		res = "";
		for (int i = 0; i < newLineSize - 1; i++)
			res = res + newLine[i];
		return (res);
	}
	return (newLine);
}

void	copyAndReplace(std::string filename, std::string s1, std::string s2)
{
	std::string	line;
	std::string	newLine;
	std::string	newFilename;

	std::ifstream MyReadFile(filename.c_str());
	if (!validateReadFile(MyReadFile, filename))
		return ;
	newFilename = filename + ".replace";
	std::ofstream MyNewFile(newFilename.c_str());
	if (!validateNewFile(MyReadFile, MyNewFile, newFilename))
		return ;
	while (getline (MyReadFile, line)) 
	{
		if (newLine.empty())
			newLine = "";
		line = formatLine(line, s1, s2);
		newLine += line;
		newLine = newLine + "\n";
	}
	newLine = strimNewLine(line, newLine);
	MyNewFile << newLine;
	MyNewFile.close();
	MyReadFile.close();
}

int	main(int argc, char **argv)
{
	std::string	filename;
	std::string	s1;
	std::string	s2;

	if (argc != 4)
	{
		std::cout << "Invalid number of argument\n";
		exit(EXIT_FAILURE);
	}
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	copyAndReplace(filename, s1, s2);
	return (0);
}
