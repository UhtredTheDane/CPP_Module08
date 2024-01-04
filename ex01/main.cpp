/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 14:25:00 by agengemb          #+#    #+#             */
/*   Updated: 2024/01/03 18:20:48 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <list>
#include "Span.hpp"

static void out_of_range_test(void)
{
	Span sp = Span(5);
	
	try
	{
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << "\n\n";
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

static void basic_test(void)
{
	Span sp = Span(5);
	try
	{
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "Shortest Sp: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest Sp: " << sp.longestSpan() << "\n\n";
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	Span sp2(sp);
	std::cout << "Shortest Sp2: " << sp2.shortestSpan() << std::endl;	
	std::cout << "Shortest Sp2: " << sp2.longestSpan() << "\n\n";

	Span sp3(2);
	sp3 = sp;
	std::cout << "Shortest Sp3: " << sp3.shortestSpan() << std::endl;	
	std::cout << "Shortest Sp3: " << sp3.longestSpan() << "\n\n";
}

static void several_number_test(void)
{
	srand(time(0));
	Span sp = Span(10000);
	for (int i = 0; i < 10000; ++i)
		sp.addNumber(rand() % 200);
	std::cout << "Shortest Sp: " << sp.shortestSpan() << std::endl;
	std::cout << "Shortest Sp: " << sp.longestSpan() << "\n\n";

	Span sp2 = Span(20000);
	try
	{
		sp2.addSeveralNumbers<std::vector<int> >(sp.getBegin(), sp.getEnd());
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	for (int i = 0; i < 10; ++i)
		sp2.addNumber(rand() % 2000);
	std::cout << "Shortest Sp2: " << sp2.shortestSpan() << std::endl;
	std::cout << "Shortest Sp2: " << sp2.longestSpan() << "\n\n";
}

static void other_container_test(void)
{
	std::list<int> lst(10, 5);
	Span sp = Span(200);
	std::list<int>::iterator begin = lst.begin();
	std::list<int>::iterator end = lst.end();
	
	try
	{
		sp.addSeveralNumbers<std::list<int> >(begin, end);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << sp << std::endl;
	try
	{
		sp.addSeveralNumbers<std::list<int> >(end, end);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

int main(void)
{
	out_of_range_test();
	basic_test();
	several_number_test();
	other_container_test();
	return (0);
}