/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huidris <huidris@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 23:23:54 by huidris           #+#    #+#             */
/*   Updated: 2025/08/09 08:37:38 by huidris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const std::string);
		ScavTrap(const ScavTrap& copy);
		ScavTrap& operator=(const ScavTrap& copy);

		~ScavTrap();

		void	attack(const std::string& target);
		void	guardGate();
};

#endif
