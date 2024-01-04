/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 14:25:52 by agengemb          #+#    #+#             */
/*   Updated: 2024/01/03 18:12:01 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(size_t max_size)
    : max_size(max_size)
{

}

Span::Span(Span const& toCopy)
    : max_size(toCopy.max_size)
{
	std::vector<int> array(toCopy.array);
	this->array = array;
}

Span& Span::operator=(Span const& toAffect)
{
    if (this != &toAffect)
    {
		std::vector<int> array(toAffect.array);
		this->array = array;
		max_size = toAffect.max_size;
    }
    return (*this);
}

Span::~Span(void)
{

}

void	Span::addNumber(int number)
{
	if (array.size() < max_size)
		array.push_back(number);
	else
		throw (std::out_of_range(std::string("Full Span")));
}

size_t	Span::shortestSpan(void)
{
	std::vector<int> temp(array);
	std::vector<int>::iterator min;

	std::sort(temp.begin(), temp.end());
	std::adjacent_difference(temp.begin(), temp.end(), temp.begin());	
	min = std::min_element(temp.begin() + 1, temp.end());
	return (*min);
}

size_t	Span::longestSpan(void)
{
	std::vector<int>::iterator max;
	std::vector<int>::iterator min;

	max = std::max_element(array.begin(), array.end());
	min = std::min_element(array.begin(), array.end());
	return(*max - *min);
}

std::vector<int>::const_iterator Span::getBegin(void) const
{
	return (array.begin());
}

std::vector<int>::const_iterator Span::getEnd(void) const
{
	return (array.end());
}

std::ostream &operator<<(std::ostream &flux, Span const& b)
{
	for (std::vector<int>::const_iterator it = b.getBegin(); it != b.getEnd(); ++it)
		flux << *it << " ";
	return (flux);
}