/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huidris <huidris@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 06:09:47 by huidris           #+#    #+#             */
/*   Updated: 2025/08/08 06:09:48 by huidris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Default", 100, 50, 20)
{
	std::cout << "Updating to ScavTrap " <<_name << std::endl;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "Updating to ScavTrap Name: " << _name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "ScavTrap construct update copied from " << other._name << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap " << _name << " assigned with "<< other._name << std::endl;
	if (this != &other)
	{
		_name = other._name;
		_hit = other._hit;
		_energy = other._energy;
		_attack = other._attack;
	}
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " destroyed" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if(_energy > 0)
	{
		--_energy;
		++_attack;
		std::cout << "ScavTrap " << _name << " attack " << target << std::endl;
		std::cout << "causing " << _attack << " damage." << std::endl;
	}
	else if (_energy == 0)
		std::cout << _name << " have no energy left to attack " << target << std::endl;
	getHealth();
}

void	ScavTrap::guardGate()
{
	std::cout << "Gate keeper " << _name << " mode activated" << std::endl;
}
