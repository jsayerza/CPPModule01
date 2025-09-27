/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 21:00:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/09/27 21:00:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( int argc, char **argv )
{
	Harl		harl;

	if ( argc != 2)
	{
		std::cerr << "Ús: ./harlFilter level" << std::endl;
		return (1);
	}
	harl.complain(argv[1]);

    return (0);
}