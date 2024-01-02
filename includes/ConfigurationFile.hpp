/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConfigurationFile.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 11:20:29 by wmoughar          #+#    #+#             */
/*   Updated: 2024/01/02 11:56:45 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONFIGURATIONFILE_HPP
# define CONFIGURATIONFILE_HPP

# include "Exception.hpp"
# include <string>
# include <iostream>
# include <fstream>
// # include <algorithm>

class ConfigurationFile
{
	private:
		std::string	_fileName;
		ConfigurationFile();

	public:
		ConfigurationFile(std::string fileName);
		ConfigurationFile(const ConfigurationFile &);
		ConfigurationFile	&operator=(const ConfigurationFile &);
		~ConfigurationFile();

		void	isFileValid();
};

bool	checkFileExctension(std::string fileName);

#endif
