/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cyberphonebook2077.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiaz-pa <pdiaz-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 12:16:45 by pdiaz-pa          #+#    #+#             */
/*   Updated: 2022/01/18 04:59:08 by pdiaz-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Contact.class.hpp"
#include "Phonebook.class.hpp"

int	add_mode(Contact *contact){
	std::string buff;
	std::cout << "Introduzca el nombre." << std::endl;
	std::getline (std::cin, buff);
	contact->setFirst(buff);
	std::cout << "Introduzca el apellido." << std::endl;
	std::getline (std::cin, buff);
	contact->setLast(buff);

	std::cout << "Introduzca el apodo." << std::endl;
	std::getline (std::cin, buff);
	contact->setNick(buff);

	std::cout << "Introduzca el teléfono." << std::endl;
	std::getline (std::cin, buff);
	contact->setNumber(buff);

	std::cout << "Introduzca el secreto más oscuro." << std::endl;
	std::getline (std::cin, buff);
	contact->setSecret(buff);

	std::cout << "nombre -> "<< contact->getFirst() << std::endl;
	std::cout << "apellido -> " << contact->getLast() << std::endl;
	std::cout << "apodo -> " << contact->getNick() << std::endl;
	std::cout << "telefono -> " << contact->getNumber() << std::endl;
	std::cout << "secreto -> " << contact->getSecret() << std::endl;
	return(0);
}

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
			add_mode(&book.array[i]);
			std::cout << "indice de la agenda -> " << i << std::endl;
			i++;
			if (i == 7)
				i = 7;
		}

		else if (mode.compare("SEARCH") == 0)
			std::cout << "este es el modo -> " << mode << std::endl;
		else if (mode.compare("EXIT") == 0)
			again = 0;
		else
			std::cout << "Comando erróneo. Utiliza ADD, SEARCH o EXIT" << std::endl;
	}
	std::cout << "Gracias por usar CyberPhonebook 2077." << std::endl;
}