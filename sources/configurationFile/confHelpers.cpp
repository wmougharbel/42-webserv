/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   confHelpers.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 11:56:25 by wmoughar          #+#    #+#             */
/*   Updated: 2024/01/06 16:24:42 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ConfigurationFile.hpp"

bool	checkFileExctension(std::string fileName)
{
	size_t	len = fileName.length();

	if (fileName[len - 5] == '.' && fileName[len - 4] == 'c' && fileName[len - 3] == 'o' \
		&& fileName[len - 2] == 'n' && fileName[len - 1] == 'f')
		return (true);
	return (false);
}
