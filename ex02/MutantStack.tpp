template <typename T>
MutantStack<T>::MutantStack(void)
{

}

template <typename T>
MutantStack<T>::MutantStack(MutantStack<T> const& toCopy)
    : std::stack<T>::c(toCopy.std::stack<T>::c)
{

}

template <typename T>
MutantStack<T> const& MutantStack<T>::operator=(MutantStack<T> const& toAffect)
{
    if (this != &toAffect)
    {
        std::deque<T> temp(toAffect.std::stack<T>::c);
        this->std::stack<T>::c = temp;
    }
    return (*this);
}

template <typename T>
void MutantStack<T>::getPtrStack(void) const
{
    std::cout << &(this->std::stack<T>::c) << std::endl;
}

template <typename T>
MutantStack<T>::~MutantStack(void)
{

}

template <typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::begin(void)
{
    return (std::stack<T>::c.begin());
}

template <typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::end(void)
{
    return (std::stack<T>::c.end());
}

template <typename T>
typename std::stack<T>::container_type::reverse_iterator MutantStack<T>::rbegin(void)
{
    return (std::stack<T>::c.rbegin());
}

template <typename T>
typename std::stack<T>::container_type::reverse_iterator MutantStack<T>::rend(void)
{
    return (std::stack<T>::c.rend());
}
template <typename T>
typename std::stack<T>::container_type::const_iterator MutantStack<T>::cbegin(void)
{
    return (std::stack<T>::c.cbegin());
}

template <typename T>
typename std::stack<T>::container_type::const_iterator MutantStack<T>::cend(void)
{
    return (std::stack<T>::c.cend());
}

template <typename T>
typename std::stack<T>::container_type::const_reverse_iterator MutantStack<T>::crbegin(void)
{
    return (std::stack<T>::c.crbegin());
}

template <typename T>
typename std::stack<T>::container_type::const_reverse_iterator MutantStack<T>::crend(void)
{
    return (std::stack<T>::c.crend());
}