#include <iostream>
#include "private.h"

using namespace std;

float sonQueue_private::variant23()
{
	Unit* buff = get_last();
	float sum = 0;
	float iter = 0;
	float start = (size % 2 == 0) ? buff->data : buff->prev->data;
	Unit* last = get_last();
	if (size % 2 == 0) {
		iter = size / 2 + 1;
	}
	else {

		iter = size / 2;
		last = last->prev;
	}


	for (int i = 0; i < iter; i++)
	{

		sum = sum + (start);

		last = last->prev;
		last = last->prev;
		if (last == nullptr)
		{
			break;
		}
		start = last->data;
	}

	return sum;

}
int sonQueue_private::pop() { return parentQueue::pop(); }
void sonQueue_private::push(int el) { return parentQueue::push(el); }
void sonQueue_private::print() { return parentQueue::print(); }
void sonQueue_private::merge(sonQueue_private& Q1) { return parentQueue::merge(Q1); }
void sonQueue_private::copy(sonQueue_private& Q1) { return parentQueue::copy(Q1); }
bool sonQueue_private::isEmpty() { return parentQueue::isEmpty(); }