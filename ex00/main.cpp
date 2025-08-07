/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huidris <huidris@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 23:19:17 by huidris           #+#    #+#             */
/*   Updated: 2025/08/08 03:28:15 by huidris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap Robot1;
	ClapTrap Robot2 ("Bororo");
	ClapTrap Robot3(Robot2);
	Robot1 = Robot2;

	Robot1.attack("Ant");
	Robot1.takeDamage(100);
	Robot1.beRepaired(10);

	std::cout << std::endl;

	Robot2.attack("Ant");
	Robot2.takeDamage(9);
	Robot2.beRepaired(1);

	return 0;
}
