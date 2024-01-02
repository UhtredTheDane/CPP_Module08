/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 14:16:42 by agengemb          #+#    #+#             */
/*   Updated: 2023/12/29 14:24:24 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <string>
#include <iterator>
#include <stdexcept>

template<typename T>
typename T::const_iterator easyfind(T const& container, int toFind)
{
    typename T::const_iterator it = std::find(container.begin(), container.end(), toFind);
    if (it == container.end())
        throw (std::runtime_error(std::string("Not find")));
    return (it);
}
#endif
