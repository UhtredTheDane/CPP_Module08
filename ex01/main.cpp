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

#include "Span.hpp"
#include <algorithm>
int main(void)
{
	Span a(3);
	a.addNumber(2);
	a.addNumber(5);

	Span b(a);
	Span c(4);
	
	std::cout << b.shortestSpan() << std::endl;	
	std::cout << b.longestSpan() << std::endl;
	return (0);
}
