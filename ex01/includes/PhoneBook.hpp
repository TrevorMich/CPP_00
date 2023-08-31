/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 08:55:12 by ioduwole          #+#    #+#             */
/*   Updated: 2023/08/30 14:24:32 by ioduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <stdlib.h>
#include "Contact.hpp"

class PhoneBook {
	private:
	Contact			lists[8];
	std::string		_userinput;
	int				_entry;
	void			_insertContact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds);

	public:
	PhoneBook();
	~PhoneBook();

	void	showInstructions();
	int		getInfo();
	
} ;
#endif