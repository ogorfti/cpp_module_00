/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 12:44:27 by ogorfti           #+#    #+#             */
/*   Updated: 2023/09/25 12:53:30 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#define ADD "ADD"
#define SEARCH "SEARCH"
#define EXIT "EXIT"
#define COLOR_YELLOW "\033[33m"
#define COLOR_RESET "\033[0m"

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact array[8];
		int nbr;
	public:
		PhoneBook();
		void	add_contact(Contact contact);
		void	print_contact(void);
		int		get_index(void);
		void	contact_index(void);
};

#endif