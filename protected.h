#pragma once
#include "ParClass.h"

class sonQueue_protected : protected parentQueue
{
public:
	float variant23();
	int pop(); //�������� �������� �������
	void push(int el); //���������� �������� �������
	void print(); //����� �� ������� �������
	void merge(sonQueue_protected& Q1); //������� ���� ��������
	void copy(sonQueue_protected& Q); //����������� �������
	bool isEmpty(); //�������� �� �������������
}; 
