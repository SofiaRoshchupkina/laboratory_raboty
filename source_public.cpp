#include <iostream>
#include "public.h"
using namespace std;
/*Вариант 24 - подсчет суммы четных элементов*/

float sonQueue_public::variant23()
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

int sonQueue_public::pop() { return parentQueue::pop(); }
void sonQueue_public::push(int el) { return parentQueue::push(el); }
void sonQueue_public::print() { return parentQueue::print(); }
void sonQueue_public::merge(sonQueue_public& Q1) { return parentQueue::merge(Q1); }
void sonQueue_public::copy(sonQueue_public& Q1) { return parentQueue::copy(Q1); }
bool sonQueue_public::isEmpty() { return parentQueue::isEmpty(); }