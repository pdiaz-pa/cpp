/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiaz-pa <pdiaz-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 09:25:34 by pdiaz-pa          #+#    #+#             */
/*   Updated: 2022/01/20 07:33:48 by pdiaz-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"
#include "Contact.class.hpp"
#include <iostream>
#include <iomanip>
#include <string>

std::string Phonebook::search_printer( std::string str){
	std::string cutstr;
	if (str.size() <= 10)
		return (str);
	else{
		cutstr = str.substr(0, 9);
		cutstr = cutstr.append(".");
		return (cutstr);
	}
}

void Phonebook::print_head( void ){
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

void Phonebook::print_book(  ){
	int i;
	std::string buff;
	i = 0;
	while (i < 8){
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << i;
		std::cout << "|";
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << search_printer(this->array[i].getFirst());
		std::cout << "|";
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << search_printer(this->array[i].getLast());
		std::cout << "|";
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << search_printer(this->array[i].getNick());
		std::cout << std::endl;		
		i++;
	}

}

int	Phonebook::add_mode(Contact *contact){
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


int Phonebook::search_mode ( ){
	
	std::string	strindex;
	int index;
	print_head();
	print_book();
	std::cout << "Introduzca el índice de la agenda que quiere consultar" << std::endl;
	std::getline (std::cin, strindex);
	if (strindex[0] < '0' || strindex[0] > '7')
		std::cout << "Error. Ha de ser un número entre 0 y 7" << std::endl;
	else{
		index = std::stoi(strindex);
		if (index > 8 || index < 0)
			std::cout << "El número debe estar comprendido entre 0 y 7" << std::endl;
		else{
			std::cout << "NOMBRE ->" << this->array[index].getFirst() << std::endl;
			std::cout << "APELLIDO ->" << this->array[index].getLast() << std::endl;
			std::cout << "APODO ->" << this->array[index].getNick() << std::endl;
			std::cout << "NÚMERO ->" << this->array[index].getNumber() << std::endl;
			std::cout << "SECRETO ->" << this->array[index].getSecret() << std::endl;
		}
	}


	return (0);
}

Phonebook::Phonebook( void ){
	std::cout << "Creando agenda" << std::endl;
	return;
}

Phonebook::~Phonebook( void ){
	std::cout << "Destruyendo agenda" << std::endl;
	return;
}