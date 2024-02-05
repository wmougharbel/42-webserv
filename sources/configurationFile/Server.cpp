/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Server.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:28:36 by wmoughar          #+#    #+#             */
/*   Updated: 2024/02/05 21:41:04 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Server.hpp"

Server::Server()
{
}

Server::Server(const Server &copy)
{
	this->_port = copy._port;
	this->_serverName = copy._serverName;
	this->_host = copy._host;
	this->_root = copy._root;
	this->_index = copy._index;
}

Server	&Server::operator=(const Server &object)
{
	if (this != &object)
	{
		_port = object._port;
		_serverName = object._serverName;
		_host = object._host;
		_root = object._root;
		_index = object._index;
	}
	return (*this);
}

Server::~Server(){}


