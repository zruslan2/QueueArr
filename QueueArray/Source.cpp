#include "QueueArray.h"
#include "QueueArray.cpp"

int main()
{
	QueueArray<int> q;
	q.push(5);
	q.push(6);
	q.push(20);
	cout << q.front() << endl;
	cout << q.back() << endl;	
	q.pop();
	cout << q.front() << endl;
	return 0;
}