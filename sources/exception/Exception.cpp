/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exception.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 10:33:31 by wmoughar          #+#    #+#             */
/*   Updated: 2024/01/12 11:44:13 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Exception.hpp"

Exception::Exception(){}

Exception::Exception(const char *message): _message(message){}

Exception::Exception(const Exception &copy): _message(copy._message){}

Exception	&Exception::operator=(const Exception &object)
{
	if (this != &object)
		this->_message = object._message;
	return (*this);
}

Exception::~Exception() throw(){}

const char	*Exception::what() const throw()
{
	return (_message);
}
