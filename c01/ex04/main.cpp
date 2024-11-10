/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 07:20:42 by trazanad          #+#    #+#             */
/*   Updated: 2024/11/07 13:28:19 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void	readFile(std::string filename)
{
	std::string	line;

	std::ifstream MyReadFile(filename);
	while (getline (MyReadFile, line)) 
	{
  		std::cout << line << std::endl;
	}
	MyReadFile.close();
}

int	ft_strnstr(std::string srcStr, std::string toFind)
{
	int	j;
	int	lenToind;
	int	lenSrcStr;

	lenToind = toFind.length();
	lenSrcStr = srcStr.length();
	for (int i = 0; i < lenSrcStr; i++)
	{
		j = i;
		for (int k = 0; k < lenToind; k++)
		{
			if (srcStr[j] != toFind[k])
				break ;
			j++;
		}
		if (j == lenToind)
			return (i);
	}
	return (-1);
}

void	createFile(std::string filename)
{
	std::string	line;
	std::string	newFileContent;
	std::string	newFile;

	std::ifstream MyReadFile(filename);
	newFile = filename + ".replace";
	std::ofstream MyNewFile(newFile);
	while (getline (MyReadFile, line)) 
	{
		if (newFileContent.empty())
			newFileContent = "";
		newFileContent += line;
		newFileContent += '\n';
	}
	MyNewFile << newFileContent;
	MyNewFile.close();
	MyReadFile.close();
}

void	copyAndReplace(std::string filename, std::string s1, std::string s2)
{
	int	s1Len = s1.length();
	int	s2Len = s2.length();

	if (s1Len < s2Len)
		return ;
	createFile(filename);
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
