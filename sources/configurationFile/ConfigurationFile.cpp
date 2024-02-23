/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConfigurationFile.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 11:23:58 by wmoughar          #+#    #+#             */
/*   Updated: 2024/02/05 21:46:09 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ConfigurationFile.hpp"

ConfigurationFile::ConfigurationFile()
{
}

ConfigurationFile::ConfigurationFile(std::string fileName): _fileName(fileName), _it(_server.begin())
{
	// this->_port = 0;
	parseFileInMap();
	// initValues();
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
	size_t	pos;
	size_t	semicolon;

	semicolon = line.find(';');
	line = trimSpaces(line);
	pos = line.find(' ');
	if (semicolon == std::string::npos)
		throw (Exception("Missing semicolon in config file!"));
	_it = _server.find(line.substr(0, pos));
	if (_it == _server.end())
		_server[line.substr(0, pos)] = line.substr(pos + 1, semicolon);
	else
		_it->second = line.substr(pos + 1, semicolon);
}

void	ConfigurationFile::printMap()
{
	for (std::map<std::string, std::string>::iterator	it = _server.begin(); it != _server.end(); it++)
		std::cout << "Key: " << it->first << "\tValue: " << it->second << std::endl;
}

void	ConfigurationFile::parseFileInMap()
{
	std::ifstream	input;
	std::string		line;

	isFileValid();
	input.open(_fileName.c_str());
	while (line[0] != '{')
		getline(input, line);
	while (1)
	{
		if (line.find(' ') != std::string::npos)
			storeInMap(line);
		if (!getline(input, line))
			break;
		std::cout << "Line: " << line << std::endl;	
	}
	getline(input, line);
	printMap();
	countServersInFile();
}

int	ConfigurationFile::countServersInFile()
{
	std::string		line;
	std::ifstream	input;
	int				serverCount;

	serverCount = 0;
	input.open(_fileName.c_str());
	do
	{
		if (line == "server")
			serverCount++;
	}
	while (getline(input, line));
	input.close();

	std::cout << "Number of servers in file: " << serverCount << std::endl;
	return (serverCount);
}


// void	ConfigurationFile::initValues()
// {
// 	_it = _server.find("listen");
	
// 	if (_it == _server.end())
// 		throw(Exception("Invalid Port!"));
// 	this->_port = std::atoi(_it->second.c_str());

// 	_it = _server.find("root");
// 	if (_it == _server.end())
// 		throw(Exception("Invalid Root!"));
// 	this->_root = _it->second;

// 	_it = _server.find("server_name");
// 	if (_it == _server.end())
// 		throw(Exception("Invalid Server Name!"));
// 	this->_serverName = _it->second;

// 	_it = _server.find("index");
// 	if (_it == _server.end())
// 		throw(Exception("Invalid Index File!"));
// 	this->_index = _it->second;
	
// 	std::cout << "Root: "<< this->_root << std::endl;
// 	std::cout << "Port: " << this->_port << std::endl;
// 	std::cout << "Server Name: " << this->_serverName << std::endl;
// 	std::cout << "Index: " << this->_index << std::endl;
// }
