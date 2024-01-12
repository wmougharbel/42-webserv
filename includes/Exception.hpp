/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exception.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 10:29:34 by wmoughar          #+#    #+#             */
/*   Updated: 2024/01/12 11:35:29 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXCEPTION_HPP
# define EXCEPTION_HPP

# include <exception>
# include <iostream>

class Exception : public std::exception
{
	private:
		const char	*_message;
		Exception();

	public:
		Exception(const char *message);
		Exception(const Exception &);
		Exception	&operator=(const Exception &);
		~Exception() throw();
		const char	*what() const throw();
};

#endif
