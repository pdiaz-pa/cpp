/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiaz-pa <pdiaz-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 09:25:34 by pdiaz-pa          #+#    #+#             */
/*   Updated: 2022/02/14 08:48:10 by pdiaz-pa         ###   ########.fr       */
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

void Phonebook::print_book(){
	int i;
	std::string buff;
	i = 0;
	while (i < _maxindex){
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << i;
		std::cout << "|";
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << search_printer(this->_array[i].getFirst());
		std::cout << "|";
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << search_printer(this->_array[i].getLast());
		std::cout << "|";
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << search_printer(this->_array[i].getNick());
		std::cout << std::endl;		
		i++;
	}

}

int	Phonebook::add_mode(){
	std::string buff;
	std::cout << "Introduzca el nombre." << std::endl;
	std::getline (std::cin, buff);
	this->_array[_i].setFirst(buff);
	std::cout << "Introduzca el apellido." << std::endl;
	std::getline (std::cin, buff);
	this->_array[_i].setLast(buff);

	std::cout << "Introduzca el apodo." << std::endl;
	std::getline (std::cin, buff);
	this->_array[_i].setNick(buff);

	std::cout << "Introduzca el teléfono." << std::endl;
	std::getline (std::cin, buff);
	this->_array[_i].setNumber(buff);

	std::cout << "Introduzca el secreto más oscuro." << std::endl;
	std::getline (std::cin, buff);
	this->_array[_i].setSecret(buff);

	std::cout << "nombre -> "<< this->_array[_i].getFirst() << std::endl;
	std::cout << "apellido -> " << this->_array[_i].getLast() << std::endl;
	std::cout << "apodo -> " << this->_array[_i].getNick() << std::endl;
	std::cout << "telefono -> " << this->_array[_i].getNumber() << std::endl;
	std::cout << "secreto -> " << this->_array[_i].getSecret() << std::endl;

	std::cout << "indice de la agenda -> " << this->_i << std::endl;
	this->_i++;
	if (_maxindex < 8)
		_maxindex++;
	if (this->_i == 8)
		this->_i = 0;
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
		if ((index >= _i && _i != 0)|| index < 0)
			std::cout << "Error" << std::endl;
		else{
			std::cout << "NOMBRE ->" << this->_array[index].getFirst() << std::endl;
			std::cout << "APELLIDO ->" << this->_array[index].getLast() << std::endl;
			std::cout << "APODO ->" << this->_array[index].getNick() << std::endl;
			std::cout << "NÚMERO ->" << this->_array[index].getNumber() << std::endl;
			std::cout << "SECRETO ->" << this->_array[index].getSecret() << std::endl;
		}
	}


	return (0);
}

Phonebook::Phonebook( void ){
	_i = 0;
	_maxindex = 0;
	return;
}

Phonebook::~Phonebook( void ){
	return;
}