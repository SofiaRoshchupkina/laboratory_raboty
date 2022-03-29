#include <iostream>
#include "protected.h"

using namespace std;

float sonQueue_protected::variant23()
{
	Unit* buff = get_last();
	float sum = 0;
	int iter = 0;
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
int sonQueue_protected::pop() { return parentQueue::pop(); }
void sonQueue_protected::push(int el) { return parentQueue::push(el); }
void sonQueue_protected::print() { return parentQueue::print(); }
void sonQueue_protected::merge(sonQueue_protected& Q1) { return parentQueue::merge(Q1); }
void sonQueue_protected::copy(sonQueue_protected& Q1) { return parentQueue::copy(Q1); }
bool sonQueue_protected::isEmpty() { return parentQueue::isEmpty(); }