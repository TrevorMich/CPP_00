/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 09:14:10 by ioduwole          #+#    #+#             */
/*   Updated: 2023/09/01 09:32:45 by ioduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->_entry = -1;
	return ;
}

PhoneBook::~PhoneBook() {
	return ;
}

void	PhoneBook::_insertContact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds)
{
	if (this->_entry < 7)
	{
		this->_entry++;
		lists[_entry].addEntry(this->_entry, fn, ln, nn, pn, ds);
	}
	else
	{
		std::cout << "Oldest Contact will be replaced by the new Contact" << std::endl;
		_replaceOldestContact();
		lists[_entry].addEntry(this->_entry, fn, ln, nn, pn, ds);
	}
}

void	PhoneBook::_replaceOldestContact(void)
{
	for (int i = 0; i < 7; i++)
    {
        this->lists[i] = this->lists[i + 1];
        this->lists[i].index = this->lists[i + 1].index - 1;
    }
}

void	PhoneBook::showInstructions() {
	std::cout<<"Welcome\n";
	std::cout<<"This phonebook can only store 8 contacts\n";
	std::cout<<"Use 'ADD' to add a new contact\n";
	std::cout<<"Use 'SEARCH' to search for a specific contact on the list\n";
	std::cout<<"Use 'EXIT' to exit the phonebook\n";
}

int		PhoneBook::getInfo()
{
	int	i = 0, j;
	std::string	info[5];

	while (i < 5)
	{
		if (i == 0)
			std::cout<<"Key in First name: ";
		if (i == 1)
			std::cout<<"Key in Last name: ";
		if (i == 2)
			std::cout<<"Key in your Nick name: ";
		if (i == 3)
			std::cout<<"Key in your Phone number: ";
		if (i == 4)
			std::cout<<"Key in your Darkest secret: ";
		std::getline(std::cin, info[i]);
		if (i == 3)
		{
			j = 0;
			while (i == 3 && info[i] != "" && std::isdigit(info[i][j]))
				j++;
			if (j != info[i].size())
			{
				std::cout<<"You can only insert digits\n";
				info[i] = "";
			}
		}
		if (info[i] == "")
		{
			if (!std::cin.eof())
				continue ;
			std::cout<<"Exiting phonebook... Goodbye\n";
			return (0);
		}
		i++;
	}
	_insertContact(info[0], info[1], info[2], info[3], info[4]);
	std::cout<<"Your contact has been saved\n";
	return (1);
}

bool    PhoneBook::_displayExtract(void)
{
    if (this->_entry >= 0)
    {
        std::cout << "|-------------------------------------------|" << std::endl;
	    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	    std::cout << "|----------|----------|----------|----------|" << std::endl;
        for (int i = 0; i <= this->_entry; i++)
           lists[i].updateNames();
	    return (true);
    }
	std::cout << "No entries were found! use the 'ADD' command to add a contact." << std::endl;
	return (false);
}

int		PhoneBook::entries()
{
	if (_displayExtract())
	{
		std::cout<<"Select an Index: ";
		std::getline(std::cin, _userInput);
		if (std::cin.eof())
		{
			std::cout << "" << std::endl;
			std::cout << "Exiting phonebook... GOOD BYE" << std::endl;
			return (0);
		}
		while (!_displayEntry(_userInput))
		{
			if (std::cin.eof())
			{
				std::cout << "" << std::endl;
				std::cout << "Exiting phonebook... GOOD BYE" << std::endl;
				exit (0);
			}
			std::cout << "Select an  index: ";
			std::getline(std::cin, _userInput);
			if (std::cin.eof())
			{
				std::cout << "" << std::endl;
				std::cout << "Exiting phonebook... GOOD BYE" << std::endl;
				return (0);
			}
		}
	}
	return (1);
}

bool		PhoneBook::_displayEntry(std::string user_input)
{
	int userIndex = -1;
    int index;

    if (_userInput.length() > 1)
    {
        std::cout << "No entry found! Select an existing index." << std::endl;
        return (false);
    }
    else
        userIndex = int(user_input[0]) - 48;
    index = userIndex - 1;
    if (index >= 0 && index <= this->_entry)
        lists[index].insertEntry();
    else
    {
        std::cout << "No entry found! Select an existing index." << std::endl;
        return (false);
    }
    return (true);
}
