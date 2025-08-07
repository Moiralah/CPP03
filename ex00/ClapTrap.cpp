/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huidris <huidris@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 06:10:41 by huidris           #+#    #+#             */
/*   Updated: 2025/08/08 06:10:42 by huidris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :	_hit(10),
						_energy(10),
						_attack(0),
						_name("Default")

{
	std::cout << "Creating ClapTrap" << _name << std::endl;
	getHealth();
}

ClapTrap::ClapTrap(const std::string name) :	_hit(10),
												_energy(10),
												_attack(0)
{
	_name = name;
	std::cout << "Creating ClapTrap Name: " << name << std::endl;
	getHealth();

}

ClapTrap::ClapTrap(const ClapTrap &other) : _hit(other._hit),
											_energy(other._energy),
											_attack(other._attack),
											_name(other._name)
{
	std::cout << "ClapTrap copied from " << _name << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "ClapTrap " << _name << " assigned with "<< other._name << std::endl;
	if (this != &other)
	{
		_name = other._name;
		_hit = other._hit;
		_energy = other._energy;
		_attack = other._attack;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " destroyed" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if(_energy > 0)
	{
		--_energy;
		++_attack;
		std::cout << "ClapTrap " << _name << " attack " << target << std::endl;
		std::cout << "causing " << _attack << " damage." << std::endl;
	}
	else if (_energy == 0)
		std::cout << _name << " have no energy left to attack " << target << std::endl;
	getHealth();
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= _hit)
		_hit = 0;
	else
		_hit = _hit - amount;
	std::cout << _name << " take damage hit: -" << amount << std::endl;
	getHealth();
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy > 0)
	{
		--_energy;
		_hit = _hit + amount;
		std::cout << _name << " Repair body: +" << amount << std::endl;
	}
	else
		std::cout << _name << " have no energy to heal" << std::endl;
	getHealth();
}

void	ClapTrap::getHealth()
{
	std::cout << "Health Point:" << std::endl;
	std::cout << "Hit -----> " << _hit << std::endl;
	std::cout << "Energy --> " << _energy << std::endl;
	std::cout << "Attack --> " << _attack << std::endl;
}
