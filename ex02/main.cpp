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
#include "MutantStack.hpp"

template <typename T>
void test_regular_iterator(MutantStack<T>& mstack)
{
	MutantStack<T>::iterator it = mstack.begin();
	MutantStack<T>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl;
}

template <typename T>
void test_const_iterator(MutantStack<T>& mstack)
{
	MutantStack<T>::const_iterator it = mstack.cbegin();
	MutantStack<T>::const_iterator ite = mstack.cend();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << " ";
		//*it = *it * 2;
		++it;
	}
	std::cout << std::endl;
}

template <typename T>
void test_reverse_iterator(MutantStack<T>& mstack)
{
	MutantStack<T>::reverse_iterator it = mstack.rbegin();
	MutantStack<T>::reverse_iterator ite = mstack.rend();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	std::cout << std::endl;
}

template <typename T>
void test_copy_constructor(MutantStack<T>& mstack)
{
	std::stack<T> temp(mstack);
	std::cout << "temp's adress: ";
	temp.getPtrStack();
	std::cout << "mstack's adress: ";
	mstack.getPtrStack();
}
template <typename T>
void test_assignment_operator(MutantStack<T>& mstack)
{
	MutantStack<T> temp;
	temp = mstack;
	std::cout << "mstack's adress: ";
	e.getPtrStack();
	std::cout << "t's adress: ";
	t.getPtrStack();
}

int main(void)
{
	MutantStack<int> mstack;
	MutantStack<int> e;

	e.push(5);
	std::cout << "top of e:" << e.top() << std::endl;
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
	return (0);
}
