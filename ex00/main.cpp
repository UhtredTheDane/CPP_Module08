/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 14:17:02 by agengemb          #+#    #+#             */
/*   Updated: 2023/12/29 14:17:15 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include "easyfind.hpp"
#include <iostream>

int main(void)
{
	std::vector<int> test(4, -1);
	test[0] = 4;
	test[1] = 10;
	test[2] = 5;
	test[3] = 0;

	try
	{
		std::vector<int>::const_iterator it = easyfind(test, 100);
		std::cout << *it << std::endl;
	}
	catch (std::runtime_error& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
