/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 14:25:52 by agengemb          #+#    #+#             */
/*   Updated: 2023/12/29 14:25:54 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span(size_t max_size)
    : max_size(max_size)
{

}

Span(Span const& toCopy)
    : max_size(toCopy.max_size)
{
    for(std::vector<int>::iterator it = toCoppy.array.begin(); it != toCoppy.array.end(); ++it)
        array.
}

Span& operator=(Span const& toAffect)
{
    if (this != &toAffect)
    {

    }
    return (*this);
}

~Span(void)
{

}

void	addNumber(int number)
{

}

void	addSeveralNumber(int *array)
{

}

size_t	shortestSpan(void)
{

}

size_t	longestSpan(void)
{

}