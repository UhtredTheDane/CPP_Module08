template <typename T>
MutantStack<T>::MutantStack(void)
{

}

template <typename T>
MutantStack<T>::MutantStack(MutantStack<T> const& toCopy)
	: std::stack<T>(toCopy.std::stack<T>::c)
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
	std::cout << "MutantStack's destructor is called" << std::endl;
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
	return (std::stack<T>::c.begin());
}

template <typename T>
typename std::stack<T>::container_type::const_iterator MutantStack<T>::cend(void)
{
	return (std::stack<T>::c.end());
}

template <typename T>
typename std::stack<T>::container_type::const_reverse_iterator MutantStack<T>::crbegin(void)
{
	return (std::stack<T>::c.rbegin());
}

template <typename T>
typename std::stack<T>::container_type::const_reverse_iterator MutantStack<T>::crend(void)
{
	return (std::stack<T>::c.rend());
}

template <typename T>
void	regular_iterator_test(MutantStack<T>& mstack)
{
	typename std::stack<T>::container_type::iterator it = mstack.begin();
	typename std::stack<T>::container_type::iterator ite = mstack.end();
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
void	const_iterator_test(MutantStack<T>& mstack)
{
	typename std::stack<T>::container_type::const_iterator it = mstack.cbegin();
	typename std::stack<T>::container_type::const_iterator ite = mstack.cend();
	++it;
	--it;
	while (it != ite)
	{
		//*it = *it * 2;
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl;
}

template <typename T>
void reverse_iterator_test(MutantStack<T>& mstack)
{
	typename std::stack<T>::container_type::reverse_iterator it = mstack.rbegin();
	typename std::stack<T>::container_type::reverse_iterator ite = mstack.rend();	
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
void const_reverse_iterator_test(MutantStack<T>& mstack)
{
	typename std::stack<T>::container_type::const_reverse_iterator it = mstack.crbegin();
	typename std::stack<T>::container_type::const_reverse_iterator ite = mstack.crend();	
	++it;
	--it;
	while (it != ite)
	{
		//*it = *it * 2;
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl;
}

template <typename T>
void copy_constructor_test(MutantStack<T>& mstack)
{
	MutantStack<T> temp(mstack);
	std::cout << "temp's adress: ";
	temp.getPtrStack();
	std::cout << "mstack's adress: ";
	mstack.getPtrStack();
}

template <typename T>
void assignment_operator_test(MutantStack<T>& mstack)
{
	MutantStack<T> temp;
	temp = mstack;
	std::cout << "temp's adress: ";
	temp.getPtrStack();
	std::cout << "mstack's adress: ";
	mstack.getPtrStack();
}
