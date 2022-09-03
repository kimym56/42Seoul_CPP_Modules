/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmiki <yongmiki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 14:08:14 by yongmiki          #+#    #+#             */
/*   Updated: 2022/09/03 18:09:53 by yongmiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
	PhoneBook test;
	std::string	line;
	std::cout << "WELCOME TO THE ONE AND ONLY TELEPHONE BOOK!" << std::endl;
	std::cout << "ENTER ADD, SEARCH OR EXIT" << std::endl;
	while (getline(std::cin, line))
	{
		if (!line.compare("EXIT"))
			break ;
		if (!line.compare("ADD"))
			test.addContact();
		if (!line.compare("SEARCH"))
			test.search();
		std::cout << "ENTER ADD, SEARCH OR EXIT" << std::endl;
	}
}