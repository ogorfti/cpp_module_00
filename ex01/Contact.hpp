/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 13:08:35 by ogorfti           #+#    #+#             */
/*   Updated: 2023/09/25 16:59:35 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
	private:
		std::string fname;
		std::string lname;
		std::string nickname;
		std::string phone;
		std::string secret;
	public:
		void set_fname(std::string fname);
		void set_lname(std::string lname);
		void set_nickname(std::string nickname);
		void set_phone(std::string phone);
		void set_secret(std::string secret);
		std::string get_fname();
		std::string get_lname();
		std::string get_nickname();
		std::string get_phone();
		std::string get_secret();
};

#endif