#pragma once
#include "ParClass.h"

class sonQueue_public : public parentQueue
{
public:
	float variant23();
	int pop(); //удаление элемента очереди
	void push(int el); //добавление элемента очереди
	void print(); //вывод на консоль очереди
	void merge(sonQueue_public& Q1); //слияние двух очередей
	void copy(sonQueue_public& Q); //копирование очереди
	bool isEmpty(); //проверка на заполненность
};
