/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 07:44:39 by leaugust          #+#    #+#             */
/*   Updated: 2025/09/21 18:36:10 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void) {
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	std::cout << "Address of str: " << &str << std::endl;
	std::cout << "Address held by PTR: " << stringPTR << std::endl;
	std::cout << "Address held by REF: " << &stringREF << std::endl;
	std::cout << "Value of str: " << str << std::endl;
	std::cout << "Value pointed by PTR: " << *stringPTR << std::endl;
	std::cout << "Value pointed by REF: " << stringREF << std::endl;
	return 0;
}