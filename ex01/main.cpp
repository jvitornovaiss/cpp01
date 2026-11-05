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
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main ( int ac, char **av )
{
	if (ac < 2)
		return 1;
	
	Zombie* horde = zombieHorde(5, av[1]);

	if (!horde)
		return 1;

    for (int i = 0; i < 5; i++)
        horde[i].announce();

    delete[] horde;
	return 0;
}