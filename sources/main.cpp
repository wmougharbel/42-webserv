/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 14:01:37 by wmoughar          #+#    #+#             */
/*   Updated: 2024/02/05 21:46:51 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "../includes/Exception.hpp"
#include "../includes/ConfigurationFile.hpp"

int main(int argc, char **argv)
{
	try
	{
		if (argc != 2)
			throw (Exception("Incorrect numbers of arguments!"));
		ConfigurationFile	config(argv[1]);
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
}
