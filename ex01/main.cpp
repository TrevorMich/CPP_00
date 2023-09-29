/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 09:19:21 by ioduwole          #+#    #+#             */
/*   Updated: 2023/08/31 22:52:29 by ioduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/PhoneBook.hpp"

int main(int argc, char *argv[])
{
	PhoneBook	phonebook;
	std::string	command;

	phonebook.showInstructions();
	std::cout<<"\n\n";
	while (true)
	{
		std::cout<<"Enter a command: ";
		if (std::cin.eof() == true)
		{
			std::cout<<""<<"\n";
			std::cout<<"Exiting phonebook...GOODBYE\n";
			break ;
		}
		std::getline(std::cin, command);
		if (command == "EXIT")
		{
			std::cout<<"Exiting phonebook...Goodbye\n";
			break ;
		}
		else if (command == "ADD")
		{
			if (!phonebook.getInfo())
				break;
		}
		else if (command == "SEARCH")
		{
			if (!phonebook.entries())
				break;
		}
	}
	return (0);
}