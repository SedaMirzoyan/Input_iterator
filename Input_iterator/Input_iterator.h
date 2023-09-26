#ifndef INPUT_ITERATOR_H
#define INPUT_ITERATOR_H

#include <iostream>

template <typename T>

class Iterator
{
private:
	T* m_iter;

public:
	Iterator();
	~Iterator();
	Iterator(T* ptr);
	Iterator(const Iterator&);
	Iterator& operator=(const Iterator&);
	T& operator*()const;
	T* operator->()const;
   
	Iterator& operator++();
	Iterator operator++(int);
	Iterator& operator--();
	Iterator operator--(int);
	bool operator==(const Iterator&)const;
	bool operator!=(const Iterator&)const;
};

template<typename T>
Iterator<T>::Iterator<T>()
{
	std::cout << "Default " << __func__ << std::endl;
	m_iter = 0;
}

template<typename T>
Iterator<T>::Iterator<T>(T* ptr)
{
	std::cout << "Parameterized " << __func__ << std::endl;
	m_iter = ptr;
}


template<typename T>
Iterator<T>::Iterator<T>(const Iterator& ob)
{
	std::cout << "Copy " << __func__ << std::endl;
	m_iter = ob.m_iter;
}


template<typename T>
Iterator<T>::~Iterator<T>()
{
	std::cout << __func__ << std::endl;
}


template<typename T>
Iterator<T>& Iterator<T>::operator=(const Iterator& ob)
{
	std::cout << __func__ << std::endl;
	if (this != &ob)
	{
		m_iter = ob.m_iter;
	}
	return *this;
}

template<typename T>
T& Iterator<T>::operator*()const
{
	return (*m_iter);
}


template<typename T>
T* Iterator<T>::operator->()const
{
	return m_iter;
}


template<typename T>
Iterator<T>& Iterator<T>::operator++()	
{
	++m_iter;
	return *this;
}

template<typename T>
Iterator<T> Iterator<T>::operator++(int)	
{
	Iterator next_pos = *this;
	++m_iter;
	return *next_pos;
}

template<typename T>
Iterator<T>& Iterator<T>::operator--()	
{
	--m_iter;
	return *this;
}

template<typename T>
Iterator<T> Iterator<T>::operator--(int)	
{
	Iterator prev_pos = *this;
	--prev_pos;
	return *prev_pos;
}


template<typename T>
bool Iterator<T>::operator==(const Iterator& ob)const
{
	return m_iter == ob.m_iter;
}


template<typename T>
bool Iterator<T>::operator!=(const Iterator& ob)const
{
	return m_iter != ob.m_iter;
}


#endif //INPUT_ITERATOR_H