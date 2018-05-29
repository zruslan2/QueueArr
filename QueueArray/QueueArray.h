#pragma once
#include "Library.h"

template <class T>
class QueueArray
{
private:
	int cur_size;
	int buf_size;
	T *els;
public:	
	QueueArray();	
	int size()const { return cur_size; }
	T& front();
	T& back();	
	void push(T val);
	void pop();
	bool empty();
	/*~QueueArray() { delete[]els; }*/
};

