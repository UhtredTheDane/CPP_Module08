/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 14:27:24 by agengemb          #+#    #+#             */
/*   Updated: 2024/01/03 16:38:13 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "MutantStack.hpp"

void int_test(void)
{
	MutantStack<int> mstack;
	MutantStack<int> e;

	e.push(5);
	std::cout << "top of e: " << e.top() << std::endl;
	mstack.push(5);
	mstack.push(17);
	std::cout << "top of mstack: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size of mstack: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	srand(time(0));
	for (int i = 0; i < 5; ++i)
		mstack.push(rand() % 2000);
	mstack.push(0);

	regular_iterator_test(mstack);
	const_iterator_test(mstack);
	reverse_iterator_test(mstack);
	const_reverse_iterator_test(mstack);
	copy_constructor_test(mstack);
	assignment_operator_test(mstack);
}

void char_test(void)
{
	MutantStack<char> mstack;
	MutantStack<char> e;

	e.push('a');
	std::cout << "top of e: " << e.top() << std::endl;
	mstack.push('a');
	mstack.push('b');
	mstack.push('c');
	std::cout << "top of mstack: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size of mstack: " << mstack.size() << std::endl;
	mstack.push('d');
	mstack.push('e');
	mstack.push('f');
	for (char c = 'g'; c != 'z'; ++c)
		mstack.push(c);
	mstack.push('z');

	regular_iterator_test(mstack);
	const_iterator_test(mstack);
	reverse_iterator_test(mstack);
	const_reverse_iterator_test(mstack);
	copy_constructor_test(mstack);
	assignment_operator_test(mstack);
}

int main(void)
{
	std::cout << "Int MutantStack test:\n" << std::endl;
	int_test();
	std::cout << "\n\nChar MutantStack test:\n" << std::endl;
	char_test();
	return (0);
}
