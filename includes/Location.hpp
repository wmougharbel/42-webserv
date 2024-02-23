/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Location.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walid <walid@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:05:15 by walid             #+#    #+#             */
/*   Updated: 2024/02/23 15:12:36 by walid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOCATION_HPP
# define LOCATION_HPP

#include "ConfigurationFile.hpp"

class Location
{
    private:
        std::string _locationPath;
        
    public:
        Location();
        Location(const Location &);
        Location    &operator=(const Location &);
        ~Location();
};

#endif