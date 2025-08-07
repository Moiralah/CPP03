/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huidris <huidris@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 23:19:17 by huidris           #+#    #+#             */
/*   Updated: 2025/08/08 06:02:50 by huidris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
	FragTrap Robot1;
	FragTrap Robot2 ("Bororo");
	FragTrap Robot3(Robot2);
	Robot1 = Robot2;

	std::cout << std::endl;

	Robot1.attack("Ant");
	Robot1.takeDamage(100);
	Robot1.beRepaired(10);

	std::cout << std::endl;

	Robot2.attack("Ant");
	Robot2.takeDamage(9);
	Robot2.beRepaired(1);

	std::cout << std::endl;

	Robot3.highFivesGuys();

	std::cout << std::endl;

	ScavTrap Robot4;
	Robot4.guardGate();

	std::cout << std::endl;

	return 0;
}
