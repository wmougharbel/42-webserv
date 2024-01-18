/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:19:35 by wmoughar          #+#    #+#             */
/*   Updated: 2024/01/15 11:29:26 by wmoughar         ###   ########.fr       */
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

class Server : public ConfigurationFile
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
		void	initValues();
};

#endif
