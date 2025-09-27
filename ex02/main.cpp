/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 18:00:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/09/21 18:00:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main( void )
{

	std::string		stringVAR = "HI THIS IS BRAIN";
	std::string*	stringPTR = &stringVAR;
	std::string&	stringREF = stringVAR;

	std::cout << "The memory address of the string variable: " << &stringVAR << std::endl;
	std::cout << "The memory address held by stringPTR     : " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF     : " << &stringREF << std::endl;

	std::cout << "The value of the string variable         : " << stringVAR << std::endl;
	std::cout << "The value pointed to by stringPTR        : " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF        : " << stringREF << std::endl;

	return (0);
}