/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 08:55:12 by ioduwole          #+#    #+#             */
/*   Updated: 2023/08/31 23:30:17 by ioduwole         ###   ########.fr       */
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
	bool			_displayExtract();
	std::string		_userInput;
	bool			_displayEntry(std::string user_input);
	void			_replaceOldestContact();

	public:
	PhoneBook();
	~PhoneBook();

	void	showInstructions();
	int		getInfo();
	int		entries();
	
} ;
#endif