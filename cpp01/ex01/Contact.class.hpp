/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiaz-pa <pdiaz-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 09:25:36 by pdiaz-pa          #+#    #+#             */
/*   Updated: 2022/01/24 10:42:38 by pdiaz-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

class Contact
{
private:
    std::string    _first;
    std::string    _last;
    std::string    _nick;
    std::string    _number;
    std::string    _secret;
public:

    std::string	getFirst( void );
	std::string	getLast( void );
	std::string	getNick( void );
	std::string	getNumber( void );
	std::string	getSecret( void );
    void	setFirst( std::string first );
	void	setLast( std::string last );
	void	setNick( std::string nick );
	void	setNumber( std::string number );
	void	setSecret( std::string secret );
    Contact();
    ~Contact();
};



#endif