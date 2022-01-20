/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cyberphonebook2077.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiaz-pa <pdiaz-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 12:16:45 by pdiaz-pa          #+#    #+#             */
/*   Updated: 2022/01/20 07:10:19 by pdiaz-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>
#include "Contact.class.hpp"
#include "Phonebook.class.hpp"



int	main( void ){
    int again;
	int i;
	Phonebook book;
	std::string mode;

	i = 0;
    again = 1;
	std::cout << "Bienvenido a CyberPhonebook 2077." << std::endl;
    while(again == 1){
		std::cout << "Introduzca un comando." << std::endl;
		std::getline (std::cin, mode);
		if (mode.compare("ADD") == 0)
		{
			book.add_mode(&book.array[i]);
			std::cout << "indice de la agenda -> " << i << std::endl;
			i++;
			if (i == 8)
				i = 0;
		}
		else if (mode.compare("SEARCH") == 0)
			book.search_mode();
		else if (mode.compare("EXIT") == 0)
			again = 0;
		else
			std::cout << "Comando erróneo. Utiliza ADD, SEARCH o EXIT" << std::endl;
	}
	std::cout << "Gracias por usar CyberPhonebook 2077." << std::endl;
}