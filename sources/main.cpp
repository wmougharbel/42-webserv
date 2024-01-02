/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 14:01:37 by wmoughar          #+#    #+#             */
/*   Updated: 2024/01/02 10:56:41 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "../includes/Exception.hpp"

int main(int argc, char **argv)
{
	try
	{
		if (argc != 2)
			throw (Exception("Incorrect numbers of arguments!"));
		std::cout << "Argument: " << argv[1] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
}
