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

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main (int ac, char **av)
{
	if (ac < 2)
		return 1;
		
	Zombie* zombie_heap = newZombie(av[1]);

	zombie_heap->announce();
	randomChump(av[1]);

	delete zombie_heap;
	return 0;
}