/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiaz-pa <pdiaz-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 11:57:13 by pdiaz-pa          #+#    #+#             */
/*   Updated: 2022/01/13 12:00:04 by pdiaz-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <cctype>

int main ( int argc, char **argv ){
	int i = 1;
	int j = 0;
	
	if (argc == 1){
	    std::cout << "* LOUD AND UNBEREABLE FEEDBACK NOISE *" << std::endl;
	}
	else{
		while (argv[i]){
			while (argv[i][j] != '\0'){
				if (isascii(argv[i][j]) == true)
					std::cout << (char)toupper(argv[i][j]);
				j++;
			}
			j = 0;
			i++;
		}
		std::cout << std::endl; 
	}
}
	