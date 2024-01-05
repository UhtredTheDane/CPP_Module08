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
#include "MutantStack.hpp"

int main(void)
{
	MutantStack<int> e;
	e.push(5);
	std::cout << e.top() << std::endl;


	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "top of mstack: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size of mstack: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);

	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl;

	std::stack<int> s(mstack);
	std::cout << "e's adress: ";
	e.getPtrStack();
	std::cout << "mstack's adress: ";
	mstack.getPtrStack();
	
	MutantStack<int> t;
	t = e;
	std::cout << "e's adress: ";
	e.getPtrStack();
	std::cout << "t's adress: ";
	t.getPtrStack();
	return (0);
}
