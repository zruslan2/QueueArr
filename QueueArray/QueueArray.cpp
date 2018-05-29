#include "QueueArray.h"


template<class T>
QueueArray<T>::QueueArray()
{
		cur_size = 0;
		buf_size = 0;
		els = nullptr;
}

template<class T>
T& QueueArray<T>::front()
{
	if(size()>0)
		return els[0];	
}

template<class T>
T& QueueArray<T>::back()
{
	if (size()>0)
		return els[cur_size-1];	
}



template<class T>
void QueueArray<T>::push(T val)
{
	if (buf_size <= 0)
	{
		buf_size = 2;
		els = new T[buf_size];
	}
	else
	{
		if (cur_size >= buf_size)
		{
			buf_size *= 2;
			T *tmp = new T[size()];
			for (int i = 0; i < size(); i++)
				tmp[i] = els[i];
			delete[] els;
			els = tmp;
		}
	}
	els[cur_size++] = val;	
}

template<class T>
void QueueArray<T>::pop()
{
	if (cur_size > 0)
	{
		for (int i = 1; i < cur_size; i++)
			els[i - 1] = els[i];
		cur_size--;
	}
}

template <class T>
bool QueueArray<T>::empty()
{
	if (size() == 0)
		return true;
	else 
		return false;
}


