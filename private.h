#pragma once
#include "ParClass.h"

class sonQueue_private : private parentQueue
{
public:
	float variant23();
	int pop(); //�������� �������� �������
	void push(int el); //���������� �������� �������
	void print(); //����� �� ������� �������
	void merge(sonQueue_private& Q1); //������� ���� ��������
	void copy(sonQueue_private& Q); //����������� �������
	bool isEmpty(); //�������� �� �������������
};
