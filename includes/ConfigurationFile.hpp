/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConfigurationFile.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 11:20:29 by wmoughar          #+#    #+#             */
/*   Updated: 2024/01/12 13:59:52 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONFIGURATIONFILE_HPP
# define CONFIGURATIONFILE_HPP

# include "Exception.hpp"
# include <string>
# include <iostream>
# include <fstream>
# include <map>
# include <algorithm>

class ConfigurationFile
{
	private:
		std::string												_fileName;
		std::map <std::string, std::string>			_configs;
		std::map <std::string, std::string>::iterator	_it;

		size_t		_port;
		std::string	_root;

		ConfigurationFile();

	public:
		ConfigurationFile(std::string fileName);
		ConfigurationFile(const ConfigurationFile &);
		ConfigurationFile	&operator=(const ConfigurationFile &);
		~ConfigurationFile();

		void	isFileValid();
		void	storeInMap(std::string line);
		void	parseFileInMap();
		void	initValues();

		void	printMap();
};

bool		checkFileExctension(std::string fileName);
std::string	trimSpaces(std::string line);


#endif
