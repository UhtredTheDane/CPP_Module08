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

# include <vector>
# include <cstddef>
# include <string>
# include <iostream>
# include <numeric>
# include <algorithm>
# include <stdexcept>
# include <iterator>
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
		size_t	shortestSpan(void);
		size_t	longestSpan(void);
		std::vector<int>::const_iterator getBegin(void) const;
		std::vector<int>::const_iterator getEnd(void) const;

		template <typename T>
		void	addSeveralNumbers(typename T::const_iterator begin, typename T::const_iterator end)
		{
			int range = std::distance(begin, end);
			if (range <= 0)
				throw (std::range_error(std::string("Bad range")));
			array.insert(array.end(), begin, end);
		}

};

std::ostream &operator<<(std::ostream &flux, Span const& b);
#endif
