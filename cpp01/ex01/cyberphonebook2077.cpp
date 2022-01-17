/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cyberphonebook2077.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiaz-pa <pdiaz-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 12:16:45 by pdiaz-pa          #+#    #+#             */
/*   Updated: 2022/01/17 12:58:41 by pdiaz-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Contact.class.hpp"

int	add_mode( ){
	Contact contact;
	std::string buff;
	std::cout << "Introduzca el nombre." << std::endl;
	std::getline (std::cin, buff);
	contact.setFirst(buff);
	std::cout << contact.getFirst() << std::endl;
	std::cout << "Introduzca el apellido." << std::endl;
	std::cout << "Introduzca el apodo." << std::endl;
	std::cout << "Introduzca el teléfono." << std::endl;
	std::cout << "Introduzca el secreto más oscuro." << std::endl;
	
	return(0);
}

int	main( void ){
    int again;
	std::string mode;
    again = 1;
	std::cout << "Bienvenido al CyberPhonebook 2077." << std::endl;
    while(again == 1){
		std::cout << "Introduzca un comando." << std::endl;
		std::getline (std::cin, mode);
		if (mode.compare("ADD") == 0)
			add_mode();			
		else if (mode.compare("SEARCH") == 0)
			std::cout << "este es el modo -> " << mode << std::endl;
		else if (mode.compare("EXIT") == 0)
			again = 0;
		else
			std::cout << "Comando erróneo. Utiliza ADD, SEARCH o EXIT" << std::endl;
	}
	std::cout << "Gracias por usar la agenda." << std::endl;
}