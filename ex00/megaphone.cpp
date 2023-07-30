/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 23:04:57 by ogorfti           #+#    #+#             */
/*   Updated: 2023/07/30 23:04:57 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	print_mega(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		std::cout << str[i];
		i++;
	}
}

int main(int ac, char **av)
{
	int i;

	i = 1;
	if (ac > 1)
	{
		while (av[i])
		{
			print_mega(av[i]);
			if (i < ac - 1)
				std::cout << ' ';
			i++;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	// std::cout << std::endl;
	return (0);
}
