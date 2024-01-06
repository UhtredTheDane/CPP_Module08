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