/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiaz-pa <pdiaz-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 09:25:32 by pdiaz-pa          #+#    #+#             */
/*   Updated: 2022/01/20 07:08:38 by pdiaz-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

class Phonebook {
private:
	
public:
	Contact array[8];
	std::string search_printer( std::string str);
	void print_head( void );
	void print_book( );
	int add_mode(Contact *contact);
	int search_mode();
    Phonebook();
    ~Phonebook();
};
#endif