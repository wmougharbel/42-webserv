/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Server.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:19:35 by wmoughar          #+#    #+#             */
/*   Updated: 2024/02/05 21:33:58 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERVER_HPP
# define SERVER_HPP

# include "Exception.hpp"
# include "ConfigurationFile.hpp"
# include <string>
# include <iostream>
# include <fstream>
# include <map>
# include <vector>
# include <algorithm>

class ConfigurationFile;

class Server
{
	private:
		size_t		_port;
		std::string	_serverName;
		std::string	_host;
		std::string	_root;
		std::string	_index;

	public:
		Server();
		Server(const Server &);
		Server	&operator=(const Server &);
		~Server();
};

#endif
