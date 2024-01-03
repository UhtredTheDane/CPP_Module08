/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 14:25:19 by agengemb          #+#    #+#             */
/*   Updated: 2024/01/03 18:14:28 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <cstddef>
#include <string>
#include <iostream>
#include <numeric>
#include <algorithm>

class Span
{
	private:
		size_t				max_size;
		std::vector<int>	array;

		Span(void);

	public:
		Span(size_t max_size);
		Span(Span const& toCopy);
		Span& operator=(Span const& toAffect);
		~Span(void);
		void	addNumber(int number);
		void	addSeveralNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		size_t	shortestSpan(void);
		size_t	longestSpan(void);

};
#endif
