/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   confHelpers.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 11:56:25 by wmoughar          #+#    #+#             */
/*   Updated: 2024/02/05 21:43:00 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ConfigurationFile.hpp"

bool	checkFileExctension(std::string fileName)
{
	size_t	len = fileName.length();

	if (fileName[len - 5] == '.' && fileName[len - 4] == 'c' && fileName[len - 3] == 'o' \
		&& fileName[len - 2] == 'n' && fileName[len - 1] == 'f')
		return (true);
	return (false);
}

std::string	trimSpaces(std::string line)
{
	size_t	i = 0;
	size_t	len = line.length();
	size_t	j = len - 1;
	
	while (i < len && isspace(line[i]))
		i++;
	while (j > i && isspace(line[j]))
		j--;
	if (line[j] == ';')
		j--;
	return (line.substr(i, j - i + 1));
}

int	countServersInFile(std::ifstream input, std::string fileName)
{
	std::string	line;
	int			serverCount;

	serverCount = 0;
	input.open(fileName.c_str());
	do
	{
		if (line == "server")
			serverCount++;
	}
	while (getline(input, line));
	std::cout << "Number of servers in file: " << serverCount << std::endl;
	return (serverCount);
}