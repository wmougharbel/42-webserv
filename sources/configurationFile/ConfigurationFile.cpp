/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConfigurationFile.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 11:23:58 by wmoughar          #+#    #+#             */
/*   Updated: 2024/01/08 13:41:33 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ConfigurationFile.hpp"

ConfigurationFile::ConfigurationFile(){}

ConfigurationFile::ConfigurationFile(std::string fileName): _fileName(fileName), _it(_configs.begin())
{
	parseFileInMap();
}

ConfigurationFile::ConfigurationFile(const ConfigurationFile &copy): _fileName(copy._fileName){}

ConfigurationFile	&ConfigurationFile::operator=(const ConfigurationFile &object)
{
	if (this != &object)
		this->_fileName = object._fileName;
	return (*this);
}

ConfigurationFile::~ConfigurationFile(){}

void	ConfigurationFile::isFileValid()
{
	std::ifstream	input;

	input.open(_fileName.c_str());
	if (checkFileExctension(_fileName) == false)
		throw (Exception("Configuration file should end with '.conf'!"));
	if (input.is_open() == false)
		throw (Exception("Failed to open configuration file!"));
	if (input.peek() == EOF)
		throw (Exception("Emtpy configuration file!"));
	std::cout << "File " << _fileName << " was opened successfully!" << std::endl;
	input.close();
}

void	ConfigurationFile::storeInMap(std::string line)
{
	size_t											pos;

	pos = line.find(' ');
	_it = _configs.find(line.substr(0, pos));
	if (_it == _configs.end())
		_configs[line.substr(0, pos)] = line.substr(pos, line.length());
	else
		_it->second = line.substr(pos, line.length());
}

void	ConfigurationFile::printMap()
{
	for (std::map<std::string, std::string>::iterator	it = _configs.begin(); it != _configs.end(); it++)
		std::cout << "Key: " << it->first << "\tValue: " << it->second << std::endl;
}

void	ConfigurationFile::parseFileInMap()
{
	std::ifstream	input;
	std::string		line;

	isFileValid();
	input.open(_fileName.c_str());
	getline(input, line);
	while (1)
	{
		if (line.find(' ') != std::string::npos)
			storeInMap(line);
		if (!getline(input, line))
			break;
		std::cout << "Line: " << line << std::endl;	
	}
	printMap();
}
