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

Server::Server()
{
	initValues();
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
		this->_port = object._port;
		this->_serverName = object._serverName;
		this->_host = object._host;
		this->_root = object._root;
		this->_index = object._index;
	}
	return (*this);
}

Server::~Server(){}


void	Server::initValues()
{
	_it = _server.find("listen");
	
	if (_it == _server.end())
		throw(Exception("Invalid Port!"));
	this->_port = std::atoi(_it->second.c_str());

	_it = _server.find("root");
	if (_it == _server.end())
		throw(Exception("Invalid Root!"));
	this->_root = _it->second;

	_it = _server.find("server_name");
	if (_it == _server.end())
		throw(Exception("Invalid Server Name!"));
	this->_serverName = _it->second;

	_it = _server.find("index");
	if (_it == _server.end())
		throw(Exception("Invalid Index File!"));
	this->_index = _it->second;
	
	std::cout << "Root: "<< this->_root << std::endl;
	std::cout << "Port: " << this->_port << std::endl;
	std::cout << "Server Name: " << this->_serverName << std::endl;
	std::cout << "Index: " << this->_index << std::endl;
}
