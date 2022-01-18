/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiaz-pa <pdiaz-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 09:25:27 by pdiaz-pa          #+#    #+#             */
/*   Updated: 2022/01/18 03:48:03 by pdiaz-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Contact.class.hpp"

std::string  Contact::getFirst( void ){
    return this->_first;
}

std::string	Contact::getLast( void ){
    return this->_last;
}

std::string	Contact::getNick( void ){
    return this->_nick;
}

std::string	Contact::getNumber( void ){
    return this->_number;
}

std::string	Contact::getSecret( void ){
    return this->_secret;
}

void	Contact::setFirst(std::string first){
	this->_first = first;
}

void	Contact::setLast(std::string last){
	this->_last = last;
}

void	Contact::setNick(std::string nick){
	this->_nick = nick;
}

void	Contact::setNumber(std::string number){
	this->_number = number;
}

void	Contact::setSecret(std::string secret){
	this->_secret = secret;
}

Contact::Contact( void )    {
    std::cout << "Creando contacto" << std::endl;
    return;
}

Contact::~Contact( void )   {
    std::cout << "Destruyendo contacto" << std::endl;
    return;
}