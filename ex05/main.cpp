/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 12:00:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/09/27 12:00:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( void )
{
	Harl		harl;
	std::string	level;

	level = "INFO";
	harl.complain(level);
	level = "DEBUG";
	harl.complain(level);
	level = "ERROR";
	harl.complain(level);
	level = "DEBUG";
	harl.complain(level);
	level = "WARNING";
	harl.complain(level);

    return (0);
}