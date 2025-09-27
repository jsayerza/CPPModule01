/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 12:00:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/09/27 12:00:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void )
{}

Harl::~Harl()
{}

void Harl::debug( void )
{
	std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::info( void )
{
	std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning( void )
{
	std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}
void Harl::error( void )
{
	std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
	std::string levels[4] = {
		"DEBUG",
		"INFO", 
		"WARNING",
		"ERROR"		
	};
	void (Harl::*complainFuncs[4])( void ) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*complainFuncs[i])();
			return ;
		}
	}
	std::cout << "No existeix aquest level de complain :-(" << std::endl;
}
