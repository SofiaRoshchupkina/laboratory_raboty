#pragma once
#include "ParClass.h"

class sonQueue_protected : protected parentQueue
{
public:
	float variant23();
	int pop(); //удаление элемента очереди
	void push(int el); //добавление элемента очереди
	void print(); //вывод на консоль очереди
	void merge(sonQueue_protected& Q1); //слияние двух очередей
	void copy(sonQueue_protected& Q); //копирование очереди
	bool isEmpty(); //проверка на заполненность
}; 
