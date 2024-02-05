/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConfigurationFile.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 11:20:29 by wmoughar          #+#    #+#             */
/*   Updated: 2024/02/05 21:45:47 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONFIGURATIONFILE_HPP
# define CONFIGURATIONFILE_HPP

# include "Exception.hpp"
# include "Server.hpp"
# include <string>
# include <iostream>
# include <fstream>
# include <map>
# include <vector>
# include <algorithm>

class Server;

class ConfigurationFile
{
	private:
		std::string									_fileName;
		std::map <std::string, std::string>			_server;
		std::map <std::string, std::string>::iterator	_it;
		std::vector <Server>	_servers;
		ConfigurationFile();

	public:
		ConfigurationFile(std::string fileName);
		ConfigurationFile(const ConfigurationFile &);
		ConfigurationFile	&operator=(const ConfigurationFile &);
		virtual	~ConfigurationFile();

		void	isFileValid();
		void	storeInMap(std::string line);
		void	parseFileInMap();
		// void	initValues();

		void	printMap();
};

bool		checkFileExctension(std::string fileName);
std::string	trimSpaces(std::string line);
int			countServersInFile(std::ifstream input, std::string fileName)



#endif
