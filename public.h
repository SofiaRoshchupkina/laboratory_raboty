#pragma once
#include "ParClass.h"

class sonQueue_public : public parentQueue
{
public:
	float variant23();
	int pop(); //�������� �������� �������
	void push(int el); //���������� �������� �������
	void print(); //����� �� ������� �������
	void merge(sonQueue_public& Q1); //������� ���� ��������
	void copy(sonQueue_public& Q); //����������� �������
	bool isEmpty(); //�������� �� �������������
};
