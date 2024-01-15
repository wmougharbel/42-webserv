/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Server.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:28:36 by wmoughar          #+#    #+#             */
/*   Updated: 2024/01/15 11:34:52 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Server.hpp"

Server::Server(){}

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
		this->_port = object._port;
		this->_serverName = object._serverName;
		this->_host = object._host;
		this->_root = object._root;
		this->_index = object._index;
	}
	return (*this);
}

Server::~Server(){}

