/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiaz-pa <pdiaz-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 09:25:34 by pdiaz-pa          #+#    #+#             */
/*   Updated: 2022/01/18 02:43:46 by pdiaz-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"
#include "Contact.class.hpp"
#include <iostream>
#include <string>

Phonebook::Phonebook( void ){
	std::cout << "Creando agenda" << std::endl;
	return;
}

Phonebook::~Phonebook( void ){
	std::cout << "Destruyendoagenda" << std::endl;
	return;
}