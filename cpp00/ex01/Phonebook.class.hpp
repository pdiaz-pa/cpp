/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiaz-pa <pdiaz-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 09:25:32 by pdiaz-pa          #+#    #+#             */
/*   Updated: 2022/02/14 08:46:17 by pdiaz-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

class Phonebook {
private:
	Contact _array[8];
	int _i;
	int _maxindex;
public:
	std::string search_printer( std::string str);
	void print_head( void );
	void print_book( );
	int add_mode( void );
	int search_mode();
    Phonebook();
    ~Phonebook();
};
#endif