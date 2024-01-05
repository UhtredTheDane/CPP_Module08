/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 14:27:48 by agengemb          #+#    #+#             */
/*   Updated: 2024/01/03 16:37:15 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>

template <typename T>
class MutantStack: public std::stack<T>
{
    
    public:
        MutantStack(void);
        MutantStack(MutantStack<T> const& toCopy);
        MutantStack<T> const& operator=(MutantStack<T> const& toAffect);
        ~MutantStack(void);
        void getPtrStack(void) const;

        typedef typename std::stack<T>::container_type::iterator    iterator;
        iterator begin(void);
        iterator end(void);

        typedef typename std::stack<T>::container_type::reverse_iterator  reverse_iterator;
        reverse_iterator rbegin(void);
        reverse_iterator rend(void);

        typedef typename std::stack<T>::container_type::const_iterator  const_iterator;
        const_iterator cbegin(void);
        const_iterator cend(void);

        typedef typename std::stack<T>::container_type::const_reverse_iterator  const_reverse_iterator;
        const_reverse_iterator crbegin(void);
        const_reverse_iterator crend(void);
};

# include "MutantStack.tpp"

#endif
