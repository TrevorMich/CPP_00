/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:00:56 by ioduwole          #+#    #+#             */
/*   Updated: 2023/08/30 14:30:35 by ioduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/PhoneBook.hpp"

Contact::Contact() {
	return ;
}

Contact::~Contact () {
	return ;
}

void	Contact::addEntry(int entry, std::string fn, std::string ln, std::string nn, std::string pn, std::string ds)
{
	
	this->index = entry;
	this->_firstName = fn;
	this->_lastName = ln;
	this->_nickName = nn;
	this->_phoneNumber = pn;
	this->_darkestSecret = ds; 
}