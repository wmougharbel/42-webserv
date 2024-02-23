/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Location.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walid <walid@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:10:56 by walid             #+#    #+#             */
/*   Updated: 2024/02/23 15:13:57 by walid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Location.hpp"

Location::Location(){}

Location::Location(const Location &copy): _locationPath(copy._locationPath){}

Location    &Location::operator=(const Location &object)
{
    _locationPath = object._locationPath;
}

Location::~Location(){}
