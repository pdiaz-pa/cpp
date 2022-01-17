/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cyberphonebook2077.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiaz-pa <pdiaz-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 12:16:45 by pdiaz-pa          #+#    #+#             */
/*   Updated: 2022/01/17 15:16:46 by pdiaz-pa         ###   ########.fr       */
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

	std::cout << "Introduzca el apellido." << std::endl;
	std::getline (std::cin, buff);
	contact.setLast(buff);

	std::cout << "Introduzca el apodo." << std::endl;
	std::getline (std::cin, buff);
	contact.setNick(buff);

	std::cout << "Introduzca el teléfono." << std::endl;
	std::getline (std::cin, buff);
	contact.setNumber(buff);

	std::cout << "Introduzca el secreto más oscuro." << std::endl;
	std::getline (std::cin, buff);
	contact.setSecret(buff);

	std::cout << "nombre -> "<< contact.getFirst() << std::endl;
	std::cout << "apellido -> " << contact.getLast() << std::endl;
	std::cout << "apodo -> " << contact.getNick() << std::endl;
	std::cout << "telefono -> " << contact.getNumber() << std::endl;
	std::cout << "secreto -> " << contact.getSecret() << std::endl;
	return(0);
}

int	main( void ){
    int again;
	std::string mode;
    again = 1;
	std::cout << "Bienvenido a CyberPhonebook 2077." << std::endl;
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
	std::cout << "Gracias por usar CyberPhonebook 2077." << std::endl;
}