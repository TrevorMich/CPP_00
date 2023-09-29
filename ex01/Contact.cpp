/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:00:56 by ioduwole          #+#    #+#             */
/*   Updated: 2023/08/31 23:33:06 by ioduwole         ###   ########.fr       */
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

void	Contact::updateNames()
{
	 int user_index = this->index;

    std::cout << "|";
    std::cout << std::setw(10) << user_index << "|";
    if (this->_firstName.size() > 10)
        std::cout << std::setw(10) << this->_firstName.substr(0, 9) + "." << "|";
    else
        std::cout << std::setw(10) << this->_firstName << "|";
    if (this->_lastName.size() > 10)
        std::cout << std::setw(10) << this->_lastName.substr(0, 9) + "." << "|";
    else
        std::cout << std::setw(10) << this->_lastName << "|";
    if (this->_nickName.size() > 10)
        std::cout << std::setw(10) << this->_nickName.substr(0, 9) + "." << "|" << std::endl;
    else
        std::cout << std::setw(10) << this->_nickName << "|" << std::endl;
    std::cout << "|-------------------------------------------|" << std::endl;
}

void	Contact::insertEntry()
{
	std::cout << "" << std::endl;
    std::cout << "CONTACT" << std::endl;
    std::cout << "first name: " << this->_firstName << std::endl;
    std::cout << "last name: " << this->_lastName << std::endl;
    std::cout << "nickname: " << this->_nickName << std::endl;
    std::cout << "phone number: " << this->_phoneNumber << std::endl;
    std::cout << "darkest secret: " << this->_darkestSecret << std::endl;
}
