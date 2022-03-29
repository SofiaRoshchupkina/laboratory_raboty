#pragma once


typedef struct Unit //элемент очереди
{
	int data = 0; //значение
	Unit* prev = 0; //указатель на предыдущи элемент
} Unit;

class parentQueue {

private:
	Unit* last = 0; //указатель на "конец" очереди

protected:
	int size; //размер очереди
	//Unit* get_last(); //объ€вление функции вз€ти€ конца очереди
	//int get_size(); //объ€вление функции вз€ти€ размера очереди

public:

	parentQueue(); //конструктор без параметров
	~parentQueue(); //деструктор
	Unit* get_last(); //объ€вление функции вз€ти€ конца очереди
	int pop(); //удаление элемента очереди
	void push(int el); //добавление элемента очереди
	void print(); //вывод на консоль очереди
	void merge(parentQueue& Q1); //сли€ние двух очередей
	void copy(parentQueue& Q); //копирование очереди
	bool isEmpty(); //проверка на заполненность

};

