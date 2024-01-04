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
#include <list>
#include <deque>
#include <set>
#include <iostream>
#include "easyfind.hpp"

static void vector_test(void)
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
}

static void list_test(void)
{
	std::list<double> test;

	test.push_back(4);
	test.push_back(10.);
	test.push_back(5);
	test.push_back(0);
	try
	{
		std::list<double>::const_iterator it = easyfind(test, 10);
		std::cout << *it << std::endl;
	}
	catch (std::runtime_error& e)
	{
		std::cout << e.what() << std::endl;
	}
}

static void deque_test(void)
{
	std::deque<double> test;

	test.push_back(45.);
	test.push_back(20.);
	test.push_back(105);
	test.push_back(0);
	try
	{
		std::deque<double>::const_iterator it = easyfind(test, 105.0);
		std::cout << *it << std::endl;
	}
	catch (std::runtime_error& e)
	{
		std::cout << e.what() << std::endl;
	}
}

static void set_test(void)
{
	std::set<float> test;
	
	test.insert(45.);
	test.insert(20.);
	test.insert(105);
	test.insert(0);
	try
	{
		std::set<float>::const_iterator it = easyfind(test, 105.0);
		std::cout << *it << std::endl;
	}
	catch (std::runtime_error& e)
	{
		std::cout << e.what() << std::endl;
	}
}

int main(void)
{
	vector_test();
	list_test();
	deque_test();
	set_test();
	return (0);
}
