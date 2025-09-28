/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 21:00:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/09/27 21:00:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void )
{}

Harl::~Harl()
{}

void Harl::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}
void Harl::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

int	Harl::levelIndexGet( const std::string& level )
{
	std::string levels[4] = {
		"DEBUG",
		"INFO", 
		"WARNING",
		"ERROR"		
	};

	for (int i=0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			return (i);
		}
	}
	return (-1);
}

void Harl::complain( const std::string& level )
{
	int i = levelIndexGet(level);
	switch (i)
	{
	case 0:
		debug();
		// fallthrough
	case 1:
		info();
		// fallthrough
	case 2:
		warning();
		// fallthrough
	case 3:
		error();
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return ;
}
