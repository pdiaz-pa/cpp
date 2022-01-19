/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cyberphonebook2077.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiaz-pa <pdiaz-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 12:16:45 by pdiaz-pa          #+#    #+#             */
/*   Updated: 2022/01/19 06:49:23 by pdiaz-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>
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

void	print_head(){
	std::cout << std::setfill(' ') << std::setw(10);
	std::cout << "INDICE";
	std::cout << "|";
	std::cout << std::setfill(' ') << std::setw(10);
	std::cout << "NOMBRE";
	std::cout << "|";
	std::cout << std::setfill(' ') << std::setw(10);
	std::cout << "APELLIDO";
	std::cout << "|";
	std::cout << std::setfill(' ') << std::setw(10);
	std::cout << "APODO";
	std::cout << std::endl;
}

void	print_book( Phonebook *book ){
	int i;
	
	i = 0;
	while (i < 7){
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << i;
		std::cout << "|";
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << book->array[i].getFirst();
		std::cout << "|";
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << book->array[i].getLast();
		std::cout << "|";
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << book->array[i].getNick();
		std::cout << std::endl;		
		i++;
	}

}

int	search_mode ( Phonebook *book ){
	
	std::string	strindex;
	int index;
	print_head();
	print_book(book);
	std::cout << "Introduzca el índice de la agenda que quiere consultar" << std::endl;
	std::getline (std::cin, strindex);

	index = std::stoi(strindex);
	if (index > 7 || index < 0)
		std::cout << "El número debe estar comprendido entre 0 y 7" << std::endl;
	else{
		std::cout << "NOMBRE ->" << book->array[index].getFirst() << std::endl;
		std::cout << "APELLIDO ->" << book->array[index].getLast() << std::endl;
		std::cout << "APODO ->" << book->array[index].getNick() << std::endl;
		std::cout << "NÚMERO ->" << book->array[index].getNumber() << std::endl;
		std::cout << "SECRETO ->" << book->array[index].getSecret() << std::endl;
	}
	return (0);
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
		{
			std::cout << "este es el modo -> " << mode << std::endl;
			search_mode(&book);
		}

		else if (mode.compare("EXIT") == 0)
			again = 0;
		else
			std::cout << "Comando erróneo. Utiliza ADD, SEARCH o EXIT" << std::endl;
	}
	std::cout << "Gracias por usar CyberPhonebook 2077." << std::endl;
}