/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 13:08:35 by ogorfti           #+#    #+#             */
/*   Updated: 2023/09/25 11:39:09 by ogorfti          ###   ########.fr       */
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
		void set_fname(std::string fname) { this->fname = fname; }
		void set_lname(std::string lname) { this->lname = lname; }
		void set_nickname(std::string nickname) { this->nickname = nickname; }
		void set_phone(std::string phone) { this->phone = phone; }
		void set_secret(std::string secret) { this->secret = secret; }

		std::string get_fname() { return (fname); }
		std::string get_lname() { return (lname); }
		std::string get_nickname() { return (nickname); }
		std::string get_phone() { return (phone); }
		std::string get_secret() { return (secret); }
};

#endif