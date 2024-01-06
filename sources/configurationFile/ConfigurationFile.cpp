/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConfigurationFile.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 11:23:58 by wmoughar          #+#    #+#             */
/*   Updated: 2024/01/06 16:23:05 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ConfigurationFile.hpp"

ConfigurationFile::ConfigurationFile(){}

ConfigurationFile::ConfigurationFile(std::string fileName): _fileName(fileName)
{
	isFileValid();
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
}
