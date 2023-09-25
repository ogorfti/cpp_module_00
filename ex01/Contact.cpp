/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:49:35 by ogorfti           #+#    #+#             */
/*   Updated: 2023/09/25 16:51:33 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::set_fname(std::string fname) { this->fname = fname; }
void Contact::set_lname(std::string lname) { this->lname = lname; }
void Contact::set_nickname(std::string nickname) { this->nickname = nickname; }
void Contact::set_phone(std::string phone) { this->phone = phone; }
void Contact::set_secret(std::string secret) { this->secret = secret; }

std::string Contact::get_fname() { return (fname); }
std::string Contact::get_lname() { return (lname); }
std::string Contact::get_nickname() { return (nickname); }
std::string Contact::get_phone() { return (phone); }
std::string Contact::get_secret() { return (secret); }