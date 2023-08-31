/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 09:14:10 by ioduwole          #+#    #+#             */
/*   Updated: 2023/08/30 14:29:38 by ioduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->_entry = 0;
	return ;
}

PhoneBook::~PhoneBook() {
	return ;
}

void	PhoneBook::_insertContact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds)
{
	if (this->_entry < 7)
	{
		lists[_entry].addEntry(this->_entry, fn, ln, nn, pn, ds);
		this->_entry++;
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