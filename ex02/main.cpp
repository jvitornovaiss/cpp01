/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovais                                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 19:56:52 by jnovais           #+#    #+#             */
/*   Updated: 2026/11/05 19:56:52 by jnovais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string>
#include <iostream>

int main( void )
{
	std::string  s = "HI THIS IS BRAIN";
	std::string* stringPTR = &s;
	std::string& stringREF = s;

	std::cout << "addr s   : " << &s << std::endl;
	std::cout << "addr PTR : " << stringPTR << std::endl;
	std::cout << "addr REF : " << &stringREF << std::endl;

	std::cout << "valor s   : " << s << std::endl;
	std::cout << "valor PTR : " << *stringPTR << std::endl;
	std::cout << "valor REF : " << stringREF << std::endl;
	return 0;
}