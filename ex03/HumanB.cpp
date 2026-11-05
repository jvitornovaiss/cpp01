/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovais                                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 19:56:52 by jnovais           #+#    #+#             */
/*   Updated: 2026/11/05 19:56:52 by jnovais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL) {}

HumanB::~HumanB() {}

void HumanB::attack()
{
	if (!weapon)
	{
		std::cout << name << " has no weapon" << std::endl;
		return;
	}
		
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}
