/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 10:52:19 by ogorfti           #+#    #+#             */
/*   Updated: 2023/09/25 18:58:21 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::add_contact(Contact contact)
{
	this->array[this->nbr % 8] = contact;
	this->nbr++;
}

PhoneBook::PhoneBook() 
{
	this->nbr = 0;
}

std::string substr_dot(std::string str)
{
	if (str.length() < 9)
		return (str);
	return (str.substr(0, 9) + ".");
}

void	PhoneBook::print_contact()
{
	if (this->nbr == 0)
	{
		std::cout << "No contacts in the phonebook." << std::endl;
		return ;
	}
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout  << "|" << std::setw(10) << "Index"
				<< "|" << std::setw(10) << "First Name"
				<< "|" << std::setw(10) << "Last Name"
				<< "|" << std::setw(10) << "Nickname"
				<< "|" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;

	int max = this->nbr;
	if (max > 8)
		max = 8;
	for (int i = 0; i < max; i++)
	{
		std::string index = std::to_string(i);
		std::string fname = substr_dot(this->array[i].get_fname());
		std::string lname = substr_dot(this->array[i].get_lname());
		std::string nickname = substr_dot(this->array[i].get_nickname());

		std::cout << "|" << std::setw(10) << std::right
		<< index << "|" << std::setw(10) << std::right
		<< fname << "|" << std::setw(10) << std::right
		<< lname << "|" << std::setw(10) << std::right
		<< nickname << "|" << std::setw(10) << std::right
		<< std::endl;
		std::cout << "+----------+----------+----------+----------+" << std::endl;
	}
}

int	PhoneBook::get_index(void)
{
	std::string line;

	do
	{
		if(std::cin.eof())
			exit(0);
		std::cout << "Enter the index of the contact you wish to view: ";
		std::getline(std::cin, line);
	} while (line.size() != 1 || !std::isdigit(line[0]) || line[0] - 48 >= this->nbr || line[0] - 48 > 7);
	return (line[0] - '0');
}

void	PhoneBook::contact_index()
{
	int i;

	if (this->nbr < 1)
		return ;
	i = get_index();
	std::cout << "First Name: " << this->array[i].get_fname() << std::endl;
	std::cout << "Last name: " << this->array[i].get_lname() << std::endl;
	std::cout << "Nickname: " << this->array[i].get_nickname() << std::endl;
	std::cout << "Phone number: " << this->array[i].get_phone() << std::endl;
	std::cout << "Darkest secret: " << this->array[i].get_secret() << std::endl;
}


std::string set_contact(std::string str)
{
	std::string line;

	do {
		if(std::cin.eof())
			exit(0);
		std::cout << str;
		std::getline(std::cin, line);
	}while (line.empty());

	return (line);
}

int main()
{
	std::string line;
	PhoneBook phones;

	while (true)
	{
		std::cout << COLOR_YELLOW << "Enter command: (ADD, SEARCH, EXIT): " << COLOR_RESET;
		std::getline(std::cin, line);
		if (line == EXIT || std::cin.eof())
			break ;
		else if (line == ADD)
		{
			Contact contact;
			contact.set_fname(set_contact("First name: "));
			contact.set_lname(set_contact("Last name: "));
			contact.set_nickname(set_contact("Nickname: "));
			contact.set_phone(set_contact("Phone number: "));
			contact.set_secret(set_contact("Darkest secret: "));
			phones.add_contact(contact);
		}
		else if (line == SEARCH)
		{
			phones.print_contact();
			phones.contact_index();
		}
	}
}
